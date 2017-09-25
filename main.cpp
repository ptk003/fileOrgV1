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
using namespace std;


//region get directiory contents

int getDir (string dir, vector<string> &files){
    static DIR *dp;
    struct dirent *dirp;
    if ((dp=opendir(dir.c_str())) == NULL){
        printf("Error(%d) opening %s\n", (int)errno, dir.c_str());
        return (int)errno;
    }

    while((dirp = readdir(dp)) != NULL){
        files.push_back(string(dirp->d_name));
        printf("Item Name: %-20s ", dirp->d_name);
        cout << "Type: " << ((dirp->d_type == DT_DIR)?("Directory"):("Not Directory")) << endl;
//        cout << "Type: " << dirp->d_type << endl;
    }
    closedir(dp);
    return 0;
}
//endregion

//region display input arguments

int displayInputArgs(int argc, char *argv[]){
    printf("You passed %d input arguments\n", argc-1);
    for(int i = 0; i < argc;++i)
        printf("%d: %s\n", i, argv[i]);
    return 0;
}

//endregion


int main(int argc, char *argv[]) {
    /*

    string destDir = ".";
    vector<string> files = vector<string>();

    // check if user designated directory
    if(argc > 1){
        destDir = argv[1];
    }
    getDir(destDir, files);
    for(int i =0; i<files.size();++i){
        cout << files[i] << endl;
    }

*/

//
//    int result;
//    char oldname[] = "test.txt";
//    char newname[] = "newfilename.txt";
//    result = rename(oldname, newname);
//    if(result==0)
//        puts("File successfully renamed");
//    else
//        puts("Error renaming file");
//    editFile("testFile.txt");

    return 0;
}