//
// Created by Paul Kanatzar on 9/24/17.
//

#include "AdvancedOutput.h"



typedef struct termInfo {
    int cols;
    int rows;
} termInfo;


int editFile(char* fName){
    static FILE *fptr;
    fpos_t *p1;
    int buffSize=256;
    char buff[buffSize];
    int lineCount = 0;

    fptr=fopen(fName, "r+");
    if(fptr==NULL){
        printf("Error opening file %s\n", fName);
        return 1;
    }
    while(fgets(buff,buffSize,fptr) != NULL){
        printf("Line %d: %s", lineCount, buff);
        lineCount++;
    }
    fclose(fptr);
    return 0;
}




void dispWindowInfo(){
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    printf("cols: %d\n", w.ws_col);

}

void getTermDim(int &rows, int &cols){
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    cols = w.ws_col;
    rows = w.ws_row;
}