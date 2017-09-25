#define _RELEASE_ false
#define _CLASS_DEV_ false

#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "AdvancedOutput.h"
#include "FSTools.h"
#include "TermInfo.h"
#include <algorithm>
#include <time.h>


using namespace std;


//region display input arguments

int displayInputArgs(int argc, char *argv[]){
    printf("You passed %d input arguments\n", argc-1);
    for(int i = 0; i < argc;++i)
        printf("%d: %s\n", i, argv[i]);
    return 0;
}

//endregion

string getPWD(){
    char cwd[1024];
    if(getcwd(cwd, sizeof(cwd)) != NULL){
        printf("CWD is: %s\n", cwd);
        return cwd;
    }
    else
        return 0;
}

bool isBigger(int a, int b){return a>b;}
bool strLonger(const string& s1, const string& s2){return s1.size()<s2.size();}

const bool CLASS_DEV = false;

int main(int argc, char *argv[]) {
    string destDir = ".";

	//region CLASS DEV
	if(_CLASS_DEV_){
		if(argc > 1){
			destDir = argv[1];
		}

		FSTools *fstPtr;
		fstPtr = new FSTools;
		int numDirs, numFiles, numOther;
		vector<int> vecSizes;
		fstPtr->readDir(destDir);
		fstPtr->logContentToFile();
		fstPtr->previewFileOutput();
	}
    //endregion

	//region METHOD DEV
    string targetFile = "log.txt";

	struct stat attr;
	stat(targetFile.c_str(), &attr);
	printf("Last modified time: %s", ctime(&attr.st_mtime));
	printf("Birth Time: %s", ctime(&attr.st_birthtime));
	printf("File Size: %d", (int)attr.st_size);

	//endregion
    return 0;
}