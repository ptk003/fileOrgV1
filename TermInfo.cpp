//
// Created by Paul Kanatzar on 9/25/17.
//

#include "TermInfo.h"

TermInfo::TermInfo() {
    printf("TermInfo constructor\n");
    getTermSize();
    printInfo();
}

TermInfo::~TermInfo() {

}

int TermInfo::getTermSize() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    this->cols = w.ws_col;
    this->rows = w.ws_row;
    return 0;
}

void TermInfo::printInfo() {
    for(int i =0;i<this->cols;++i)
        printf("-");
    printf("\n");
    printf("Rows: %-10d Cols: %-10d\n", this->rows, this->cols);
}

int TermInfo::getRows() const {
    return rows;
}

int TermInfo::getCols() const {
    return cols;
}
