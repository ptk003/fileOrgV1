//
// Created by Paul Kanatzar on 9/25/17.
//

#include "FSTools.h"

FSTools::FSTools() {

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

