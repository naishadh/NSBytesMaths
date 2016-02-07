#include "stdafx.h"
#include "LinkedList.h"



LinkedList ::LinkedList(void)
{
	head = new Node();
	head = NULL;
	cout<<"Linked list constrcuted...";
}
LinkedList::~LinkedList(void)
{
	delete head;
	cout<<"Linked list deleted...";
}

void LinkedList :: DeleteNode(int data)
{
	Node *delNode = new Node(data);
	Node *temp = NULL;
	Node *cur = NULL;
	temp  = head;
	cur = temp;
	if(head->data ==data)
	{
			head = head->next;
			//delete temp;	
	}
	else
	{
		 while ( cur!= NULL )
		 {
			 if (cur->data == data)
			 {
				 temp = cur;
				 cur = temp->next;
				 temp->next = cur;
				 delete temp;
				 break;
			 }
			 cur = cur ->next;
		 }
		 
	}
	
}
void LinkedList :: AddNode(int data)
{
	Node *NewNode = new	Node(data);//create a new node
	NewNode->next = NULL;
	
	if (head == NULL)//empty link list
	{
		head = NewNode;
		return;
	}

	else
	{
		
	Node *temp_node = head;//declares a Node data type to start at root node
	
	while (temp_node->next != NULL)//traverses to the end of the link list
		{
			temp_node = temp_node->next;
		}

	temp_node->next = NewNode;
	}
	

}

void LinkedList::PritLinkedList()
{
	Node* traverse = head;
	while (traverse!= NULL)
	{
		cout << "Node: "<< traverse->data <<endl;
		traverse = traverse->next;
	}
}

