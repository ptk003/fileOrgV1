//
// Created by Paul Kanatzar on 9/25/17.
//

#ifndef BASHUTILS_TERMINFO_H
#define BASHUTILS_TERMINFO_H

#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

class TermInfo {
public:
    TermInfo();
    ~TermInfo();

    int getTermSize();
    void printInfo();

    int getRows() const;

    int getCols() const;

private:
    int rows,cols;
};


#endif //BASHUTILS_TERMINFO_H
