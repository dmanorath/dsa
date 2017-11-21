#pragma once
class List {
private:
	typedef struct Node {
		string data;
		Node* next;
	}*node;
	
	node head;
	node curr;
	node temp;

public:
	List();
	void addNode(string addData);
	// void delNode(char* delData);
	void queue();
	void insertionSort(string searchData);
	void printList();
};

