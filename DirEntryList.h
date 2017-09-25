//
// Created by Paul Kanatzar on 9/25/17.
//

#ifndef BASHUTILS_DIRENTRYNODE_H
#define BASHUTILS_DIRENTRYNODE_H

#define __CAPACITY_OF(x) (int)(((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x]))))))
#define _CAPACITY_(a) ((int)(sizeof(a)/sizeof(a[0])))

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
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


//	int numCatagories;
//	time_t rawMtime;
//	time_t rawDateCreated;
//	float rawFileSize;
//	char *itemName;
//	char* itemType;
//	char* fullPath;
//	char* formattedOutput;
//	char* rawDataOutput;
//	DirEntryNode *next, *prev;

//
//typedef struct Node {
//	int numCatagories;
//	time_t rawMtime, rawDateCreated;
//	float rawFileSize;
//	char *name, *type, *absPath, *dirPath, *formattedOutput, *rawOutput;
//	Node *N, *P;
//} Node;

class Node {
public:
	Node();
	~NODE();
	int numCatagories;
	time_t rawMtime, rawDateCreated;
	float rawFileSize;
	char *name, *type, *absPath, *dirPath, *formattedOutput, *rawOutput;
	int r, buffLen;
	char** varArr;
	Node *N, *P;
};


class DirEntryList {
public:
	DirEntryList();
	virtual ~DirEntryList();


	void appendNodeFront(char *path, char *name, char *type);
	void appendNodeBack(char *path, char *name, char *type);
	void dispNodesForward();
	void dispNodesReverse();
	void setNodeData(Node *tmp, char *path, char *name, char *type);
	void destroyList();

private:
	void setRawOutput(Node* ptr);
	void setFormattedOutput(Node* ptr);
	char* getAbsPath(char path[], char* name);
	void initStructVars(Node *ptr);



	Node *front, *back;
};


#endif //BASHUTILS_DIRENTRYNODE_H
