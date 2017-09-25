//
// Created by Paul Kanatzar on 9/25/17.
//

#include "FSTools.h"

FSTools::FSTools() {
	this->divLine="----------------------------------------------------------------------------------------------------";
	this->list = new DirEntryList();
	this->head=NULL;
	this->tail=NULL;
}

FSTools::~FSTools() {
}

int FSTools::renameFile(string oldName, string newName) {
	if(rename(oldName.c_str(),newName.c_str()) == 0)
		return 0;
	else
		printf("Error renaming file %s", oldName.c_str());
	return -1;
}

int FSTools::readDir(char* dirPath) {
	cout << "Path is: " << dirPath << endl;
	static DIR *dp;
	struct dirent *dirp;
	if ((dp=opendir(dirPath)) == NULL){
		printf("Error(%d) opening %s\n", (int)errno, dirPath);
		return (int)errno;
	}


	char itemName[256] = "";
	char isHidden[] = "Hidden";
	char isDir[] = "Directory";
	char isFile[] = "File";
	char isUnknown[] = "Unknown";

	while((dirp = readdir(dp)) != NULL){
		strcpy(itemName, dirp->d_name);
		if(itemName[0] == '.') {
//			this->hiddenVec.push_back(string(itemName));
//			list->appendNodeBack(dirPath, itemName, isHidden);
		}
		else if(dirp->d_type == DT_DIR) {
            this->dirVec.push_back(string(itemName));
			list->appendNodeBack(dirPath, itemName, isDir);
		}
		else if(dirp->d_type == DT_REG) {
            this->fileVec.push_back(string(itemName));
			list->appendNodeBack(dirPath, itemName, isFile);
		}
		else {
			this->otherVec.push_back(string(itemName));
			list->appendNodeBack(dirPath, itemName, isUnknown);
		}
	}
	closedir(dp);


//    combineVectors();
	list->dispNodesForward();
	return 0;
}

bool FSTools::logContentToFile() {
	ofs.open("log.txt");
	if(!ofs.is_open()) return false;
    char buff[256];
	ofs << std::setfill('-') << std::setw(80) << endl;
    ofs << this->divLine << endl;
    sprintf(buff ,"%-25s%-25s%-25s%-25s\n", "Hidden Files", "Directories", "Files", "Other");
    ofs << buff;
    ofs << this->divLine << endl;


    for(int i = 0; i<(int)(this->maxVecCount);++i){
        sprintf(buff ,"%-25s", (this->dirContent[0][i]).c_str());
        ofs << buff;
        sprintf(buff ,"%-25s", (this->dirContent[1][i]).c_str());
        ofs << buff;
        sprintf(buff ,"%-25s", (this->dirContent[2][i]).c_str());
        ofs << buff;
        sprintf(buff ,"%-25s\n", (this->dirContent[3][i]).c_str());
        ofs << buff;
    }
	ofs.close();
	return true;
}

void FSTools::previewFileOutput() {
    cout << this->divLine << endl;
	printf("%-25s%-25s%-25s%-25s\n", "Hidden Files", "Directories", "Files", "Other");
    cout << this->divLine << endl;
    for(int i = 0; i<(int)(this->maxVecCount);++i){
        printf("%-25s", (this->dirContent[0][i]).c_str());
        printf("%-25s", (this->dirContent[1][i]).c_str());
        printf("%-25s", (this->dirContent[2][i]).c_str());
        printf("%-25s\n", (this->dirContent[3][i]).c_str());
    }
}

bool FSTools::normalizeVecSize() {
    unsigned long tmp = 0;
    for(auto it=this->dirContent.begin(); it!=this->dirContent.end();++it){
        if((*it).size() > tmp)
            tmp = (*it).size();
    }
    for(auto it=this->dirContent.begin(); it!=this->dirContent.end();++it)
        (*it).resize(tmp,"-");
    this->maxVecCount = tmp;

    this->previewFileOutput();

    return true;
}

bool FSTools::combineVectors() {
    this->dirContent.push_back(this->hiddenVec);
    this->dirContent.push_back(this->dirVec);
    this->dirContent.push_back(this->fileVec);
    this->dirContent.push_back(this->otherVec);
    this->normalizeVecSize();
    return false;
}


void FSTools::getVecSize(vector<int> &vecSizes) {
	vecSizes.push_back((int)this->dirVec.size());
	vecSizes.push_back((int)this->fileVec.size());
	vecSizes.push_back((int)this->otherVec.size());
}

const vector<string, allocator<string>> &FSTools::getDirs() const {
	return dirVec;
}


const vector<string, allocator<string>> &FSTools::getFiles() const {
	return fileVec;
}

const vector<string, allocator<string>> &FSTools::getOther() const {
	return otherVec;
}