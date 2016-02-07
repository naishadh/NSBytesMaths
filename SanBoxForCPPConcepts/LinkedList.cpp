#include "stdafx.h"
#include "LinkedList.h"




LinkedList::~LinkedList(void)
{
	head = new Node();
}

void LinkedList :: AddNode(int data)
{
	Node *new_student = new	Node(data);//create a new node
	
	
	if (head == NULL)//empty link list
	{
		head = new_student;
		return;
	}

	else
	{
		
	Node *temp_node = head;//declares a Node data type to start at root node
	
	while (temp_node->next != NULL)//traverses to the end of the link list
		{
			temp_node = temp_node->next;
		}

	temp_node->next = new_student;
	}
	

}

void LinkedList::PritLinkedList()
{
	Node* traverse = head;
	while (traverse!= nullptr)
	{
		cout << "Node: "<< traverse->data <<endl;
		traverse = traverse->next;
	}
}

