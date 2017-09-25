//
// Created by Paul Kanatzar on 9/24/17.
//

#ifndef BASHUTILS_ADVANCEDOUTPUT_H
#define BASHUTILS_ADVANCEDOUTPUT_H
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>


using namespace std;


int editFile(char* fName);


typedef struct termInfo termInfo;

void dispWindowInfo();

void getTermDim(int &rows, int &cols);


#endif //BASHUTILS_ADVANCEDOUTPUT_H
