//
// Created by Paul Kanatzar on 9/25/17.
//

#include "DirEntryList.h"

DirEntryList::DirEntryList() {
	front = NULL;
	back=NULL;
}

DirEntryList::~DirEntryList() {
	this->destroyList();
}


void DirEntryList::appendNodeFront(char *path, char *name, char *type) {
	Node *n = new Node();
	if( front == NULL)
	{
		front = n;
		back = n;
	}
	else
	{
		front->P = n;
		n->N = front;
		front = n;
	}
}

void DirEntryList::appendNodeBack(char *path, char *name, char *type) {
	Node *n = new Node();
	if(this->front==NULL){
		this->front=n;
		this->back=n;
	} else{
		this->front->P = n;
		n->N=back;
		this->back=n;
	}
	n->name = "Test";
	initStructVars(n);
	setNodeData(n, path, name, type);
}

void DirEntryList::initStructVars(Node *ptr) {
	printf("Name: %s\n", ptr->name);

	ptr->type=(char *)malloc(sizeof(char)*(256+1));
	for(int i = 0; i<256-1;++i)
		ptr->type[i] = '-';
	ptr->type[256]='\0';
	cout << ptr->type << endl;
	cout << &(ptr->type) << endl;



}


void DirEntryList::setNodeData(Node *t, char *path, char *name, char *type) {
	Node* tmp = this->back;
	char buff[1024];
	tmp->name = name;
	tmp->type = type;
	tmp->dirPath = path;
	strcpy(buff, tmp->dirPath);

	cout << _CAPACITY_(tmp->dirPath) << endl;

	strcat(buff, "/");
	strcat(buff, tmp->name);
	tmp->absPath = buff;
	printf("\nName: %s\ndirPath: %s\nabsPath: %s\n", tmp->name, tmp->dirPath, tmp->absPath);
//	realpath(tmp->dirPath, path);
//	sprintf(tmp->absPath, "%s/%s", tmp->dirPath, tmp->name);
	struct stat attr;
	tmp->rawMtime = attr.st_mtime;
	tmp->rawDateCreated = attr.st_birthtime;
	tmp->rawFileSize = (float)attr.st_size;
	setRawOutput(tmp);
}

void DirEntryList::setRawOutput(Node *p) {
	Node* ptr = this->back;
	char buff[1024];
	sprintf(buff, "%s, %s, %s, %d, %d, %f", ptr->absPath, ptr->name, ptr->type, (int)ptr->rawMtime, (int)ptr->rawDateCreated, ptr->rawFileSize);
	ptr->rawOutput=buff;
	setFormattedOutput(ptr);
}

void DirEntryList::setFormattedOutput(Node *p) {
	Node* ptr = this->back;
	char buff[1024];
	sprintf(buff, "%-25s%-25s%-25s%-25s%-25s%-25f",\
	ptr->absPath, ptr->name, ptr->type, ctime(&(ptr->rawMtime)), ctime(&(ptr->rawDateCreated)),\
	ptr->rawFileSize);
	ptr->formattedOutput = buff;
}

char *DirEntryList::getAbsPath(char path[], char *name) {
	size_t cap = _CAPACITY_(path);

	return nullptr;
}

void DirEntryList::dispNodesForward() {
	Node *temp = front;
	cout << "\n\nNodes in forward order:" << endl;
	while(temp != NULL)
	{
		cout << temp->formattedOutput << "\n" << temp->rawOutput << "\n\n";
		temp = temp->N;
	}
}

void DirEntryList::dispNodesReverse() {
	Node *temp = back;
	cout << "\n\nNodes in reverse order :" << endl;
	while(temp != NULL)
	{
		cout << temp->formattedOutput << "\n" << temp->rawOutput << "\n\n";
		temp = temp->P;
	}
}

void DirEntryList::destroyList() {
	Node *T = this->back;
	while(T != NULL)
	{
		Node *T2 = T;
		T = T->P;
		delete T2;
	}
	this->front = NULL;
	this->back = NULL;
}

Node::Node() {
	int r = 10;
	int buffLen = 256;
	this->varArr=(char **)malloc(sizeof(char*)*r);
	for(int i=0;i<r;++i){
		varArr[i]=(char*)malloc(sizeof(char)*buffLen);
	}
	name = varArr[0];
	type = varArr[1];
	absPath = varArr[2];
	dirPath = varArr[3];
	formattedOutput = varArr[4];
	rawOutput = varArr[5];
}

Node::~NODE() {
	for(int i=0;i<r;++i){
		free(varArr[i]);
	}
	free(varArr);
}
