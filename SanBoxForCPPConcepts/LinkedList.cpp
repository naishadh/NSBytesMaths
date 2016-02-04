#include "stdafx.h"
#include "LinkedList.h"




LinkedList::~LinkedList(void)
{
}

void LinkedList :: AddNode(int data)
{
	Node tempNode ;
	tempNode.SetData(data);
	tempNode.SetNextNode(nullptr);

	Node* traverse = head;
	if(traverse==nullptr)
	{
		head = &tempNode;
		return;
	}
	else
	if(traverse->GetNextNode() == nullptr)
	{
		traverse->SetNextNode( &tempNode);
	}

	else 
	{
		while(traverse->GetNextNode()!=nullptr)
		{
			traverse = traverse->GetNextNode();

		}
		traverse->SetNextNode(&tempNode);

	}
	

}

void LinkedList::PritLinkedList()
{
	Node* traverse = head;
	while (traverse!= nullptr)
	{
		cout << "Node: "<< traverse->GetData() <<endl;
		traverse = traverse->GetNextNode();
	}
}

