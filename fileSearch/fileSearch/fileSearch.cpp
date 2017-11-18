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

void List::addNode(char *addData) {
	node n = new Node;
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
}
void List::printList() {
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int main()
{
	//List list;
	//list.addNode("Hi");
	//list.addNode("there");
	//list.printList();

		
	char buffer[100];
	ifstream myfile("test.txt");  
	if (!myfile.is_open()) {
		cout << "Error opening file." << endl;
		exit(1);
	}		
	else {
		//while (!myfile.eof()) {
			//string[] words;
			List list;
			myfile.getline(buffer, 100);
			string temp = buffer;
			cout << "Original : " << buffer << endl;
			
			short counter = 0;
			string strWords[20];
			cout << "Array: ";
			for (short i = 0; i<temp.length(); i++) {
				if (temp[i] == ' ') {
					counter++;
					i++;
				}
				strWords[counter] += temp[i];
			}
			for (short i = 0; i < 20; i++) {
				//cout << strWords[i];
				char* wordd = strWords[i].c_str();
				list.addNode(wordd);
				//cout << wordd;
			}
			cout << strWords;
			list.printList();
			cout << endl;
	//	}
	}
	myfile.close();

//	insertNode(item);
	system("pause");
    return 0;
}