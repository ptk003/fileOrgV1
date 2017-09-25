//
// Created by Paul Kanatzar on 9/25/17.
//

#ifndef BASHUTILS_FSTOOLS_H
#define BASHUTILS_FSTOOLS_H

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class FSTools {
public:
    FSTools();
    ~FSTools();


    int renameFile(string oldName, string newName);


private:
    static FILE *fptr;

};


#endif //BASHUTILS_FSTOOLS_H
