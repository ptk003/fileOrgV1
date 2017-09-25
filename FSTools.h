//
// Created by Paul Kanatzar on 9/25/17.
//

#ifndef BASHUTILS_FSTOOLS_H
#define BASHUTILS_FSTOOLS_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <string>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fstream>
#include <iomanip>
#include <time.h>

using namespace std;

struct sortByStrLen {
    bool operator()(const std::string& s1, const std::string& s2){
        return s1.size() < s2.size();
    }
};




class FSTools {
private:
    typedef vector<vector<string>> strVec2D;
public:
    FSTools();
    ~FSTools();

    int readDir(string dirPath);
    int renameFile(string oldName, string newName);
    void previewFileOutput();

    const vector<string, allocator<string>> &getDirs() const;

    const vector<string, allocator<string>> &getFiles() const;

    const vector<string, allocator<string>> &getOther() const;
    void getVecSize(vector<int> &vecSizes);
    bool logContentToFile();

private:

    bool normalizeVecSize();
    bool combineVectors();
    string divLine;
    char** dirContents;
    ofstream ofs;

    unsigned long maxVecCount;
    vector<vector<string>> dirContent;
    vector<string> hiddenVec, dirVec, fileVec, otherVec;
	vector<string> formattedOutput;
};


#endif //BASHUTILS_FSTOOLS_H
