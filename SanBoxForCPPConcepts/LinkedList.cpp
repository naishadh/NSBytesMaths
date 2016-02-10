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
	Node *temp = new Node();
	Node *cur = new Node();
	Node *old_temp =new Node();                     // create a temporary node
	temp  = head;
	old_temp = temp;
	cur = temp;
	if(head->data ==data)
	{
		// create a temporary node
		head = temp->next;      // transfer the address of 'temp->next' to 'head'
		free(temp);
	}
	else
	{
		while ( temp!= NULL )
		{
			if(temp->data ==data)
			{


				old_temp->next = temp->next;  // transfer the address of 'temp1->next' to 'old_temp->next'
				free(temp);
				break;
			}
			old_temp = temp;                    // store previous node
			temp = temp->next;                 // store current node

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

