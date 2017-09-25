#define _RELEASE_ false
#define _CLASS_DEV_ true
#define _FUNCTION_DEV_ false

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
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


//region display input arguments

int displayInputArgs(int argc, char *argv[]){
    printf("You passed %d input arguments\n", argc-1);
    for(int i = 0; i < argc;++i)
        printf("%d: %s\n", i, argv[i]);
    return 0;
}

//endregion

const char* getPWD(char* dir, int size){
    char *cwd;
    if(getcwd(dir, (size_t)size) != NULL){
        printf("CWD is: %s\n", dir);
//		dir=cwd;
        return cwd;
    }
    else
        return 0;
}

bool isBigger(int a, int b){return a>b;}
bool strLonger(const string& s1, const string& s2){return s1.size()<s2.size();}



int main(int argc, char *argv[]) {
	int buffSize = 1024;
	char destDir[buffSize];
//	if(argc>1){
//		strcpy(destDir, argv[1]);
//	}
//	else{
//		cout << "rtn from getPWD: " << getPWD(destDir) << endl;
//	}
//	printf("CWD:\n%s\n\n", getPWD(NULL));
//	printf("destDir is:\n%s\n\n", destDir);
	getPWD(destDir, buffSize);
	cout << destDir << endl;

//	char rePath[_POSIX_PATH_MAX];
//	char tmpPath[_POSIX_PATH_MAX];
//
//	printf("Input dir path: %s\n\n", destDir);
////	realpath(destDir, rePath);
//	if(rePath == 0)
//		cout << "Error getting path\n";
//	else
//		printf("Absolute path:\n%s\n\n", rePath);

//	printf(/*destDir,*/ "Combine Path: %s/%s\n", rePath, destDir);


	//region CLASS DEV
	if(_CLASS_DEV_){
		FSTools *fstPtr;
		fstPtr = new FSTools;
		int numDirs, numFiles, numOther;
		vector<int> vecSizes;
		fstPtr->readDir(destDir);
//		fstPtr->logContentToFile();
//		fstPtr->previewFileOutput();
	}
    //endregion


	//region METHOD DEV
	if(_FUNCTION_DEV_){
		string targetFile = "log.txt";

		struct stat attr;
		stat(targetFile.c_str(), &attr);


		time_t mtime= attr.st_mtime;
		time_t dateAdded = attr.st_birthtime;
		float fileSize = (float)attr.st_size;

		cout << attr.st_mtime << ctime(&mtime) << endl;
		printf("Last modified time: %s", ctime(&attr.st_mtime));
		printf("Birth Time: %s", ctime(&attr.st_birthtime));
		printf("File Size: %d", (int)attr.st_size);
	}
	//endregion
    return 0;
}