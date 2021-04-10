#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>

using namespace std;

struct Node
{
	string data;
	struct Node* next;
};

class SinglyList
{
public:
	struct Node* head = NULL;
	
	SinglyList() {}
	~SinglyList() {}
	void insertData(string);
	void displayData();
};

#endif