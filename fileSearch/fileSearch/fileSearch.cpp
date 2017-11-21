// fileSearch.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "fileSearch.h"
#include <cstdlib>

List::List() {
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::addNode(string addData) {
	node n = new Node;
//	Node *n = (Node*)malloc(sizeof(Node));
	n->next = NULL;
	n->data = addData;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
//	free(n);
}

void List::printList() {
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int main(char *argc, char argv[])
{	
	List list;
	string line;
	ifstream myFile("test.txt");
	if (myFile.is_open()) {
		//while (getline(myFile, line)) { // reads line by line
		//	cout << line << endl;
		//}
	//	cout << "Array: ";
		while (myFile >> line) { // reads each line
			//cout << line << endl;
			list.addNode(line);
		}
		list.printList();
		myFile.close();
	}
	else {
		cout << "File is not open!" << endl;
	}
	/*
	char buffer[100];
	ifstream myfile("test.txt");  
	if (!myfile.is_open()) {
		cout << "Error opening file." << endl;
		exit(1);
	}		
	else {

	//	while (!myfile.eof()) {
			//string[] words;
		//	List list;
			myfile.getline(buffer, 100);
			string temp = buffer;
			cout << "Original : " << buffer << endl;
			
			short counter = 0;
			char *strWords;
			strWords = "this is text.";
		//	char *strWord = &strWords[10];
			cout << "Array: ";
			for (short i = 0; i<temp.length(); i++) {
				if (temp[i] == ' ') {
					counter++;
					i++;
				}
				strWords[counter] += temp[i];
			}
			for (short i = 0; i < 20; i++) {
				//char strWord = strWords[10];
				cout << strWords[i] << " ";
			//	char *wordd = &strWords[i];
				//list.addNode(wordd);
				//cout << wordd;
			}
		//	cout << strWords;
	//		list.printList();
			cout << endl;
	//	}
	}
	myfile.close();
	*/
//	insertNode(item);
	system("pause");
    return 0;
}