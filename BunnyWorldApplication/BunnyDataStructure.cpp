#include "stdafx.h"
#include "BunnyDataStructure.h"


BunnyDataStructure::BunnyDataStructure(void)
{
	head = new BunnyNode();
	head = NULL;
	cout<<"Linked list constrcuted..."<<endl;
}


BunnyDataStructure::~BunnyDataStructure(void)
{
	
	free (head);
	cout<<"Linked list deleted..."<<endl;
}




void BunnyDataStructure :: DeleteBunny(Bunny data)
{
	BunnyNode *delNode = new BunnyNode(data);
	BunnyNode *temp = new BunnyNode();
	BunnyNode *cur = new BunnyNode();
	BunnyNode *old_temp =new BunnyNode();                     // create a temporary node
	temp  = head;
	old_temp = temp;
	cur = temp;
	if(head->bunny.GetBunnyName() == data.GetBunnyName())
	{
		// create a temporary node
		head = temp->next;      // transfer the address of 'temp->next' to 'head'
		free(temp);
	}
	else
	{
		while ( temp!= NULL )
		{
			if(temp->bunny.GetBunnyName() == data.GetBunnyName())
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
int BunnyDataStructure::GetCount()
{
	int count = 0;
	BunnyNode* traverse = head;
	while (traverse != NULL)
	{
		++count;
		traverse = traverse->next;
	}
	return count;
}
Bunny BunnyDataStructure::GetBunnyONIndex(int index)
{
	//if (index < 0 && head == nullptr)
		//return nullptr;

	int count = 0;
	BunnyNode* traverse = head;
	while (traverse != NULL)
	{
		if (index == count)
		{
			return traverse->bunny;
		}
		count++;
		traverse = traverse->next;
	}
}
void BunnyDataStructure :: AddBunny(Bunny data)
{
	BunnyNode *NewNode = new	BunnyNode(data);//create a new node
	NewNode->next = NULL;

	if (head == NULL)//empty link list
	{
		head = NewNode;
		return;
	}

	else
	{

		BunnyNode *temp_node = head;//declares a Node data type to start at root node

		while (temp_node->next != NULL)//traverses to the end of the link list
		{
			temp_node = temp_node->next;
		}

		temp_node->next = NewNode;
	}


}

void BunnyDataStructure::PrintBunnyList()
{
	BunnyNode* traverse = head;
	while (traverse!= NULL)
	{
		 traverse->bunny.PrintBunnyObject();
		traverse = traverse->next;
	}
}
