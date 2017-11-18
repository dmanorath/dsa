#pragma once
class List {
private:
	typedef struct Node {
		char * data;
		Node* next;
	}*node;
	
	node head;
	node curr;
	node temp;

public:
	List();
	void addNode(char* addData);
	// void delNode(char* delData);
	void printList();
};

