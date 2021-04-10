#include "SinglyList.h"

void SinglyList :: insertData(string buffer)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = buffer;
	newNode->next = head;
	head = newNode;
}

void SinglyList :: displayData()
{
	struct Node* displayNode;
	displayNode = head;

	while(displayNode != NULL)
	{
		cout<<displayNode->data<<endl;
		displayNode = displayNode->next;
	}
}
