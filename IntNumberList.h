//Chapter17 #1 LinkedList

#ifndef INTNUMBERLIST_H
#define INTNUMBERLIST_H

class IntNumberList
{
	private:
		//Declare a structure for the list
		struct ListNode
		{
			int number;				//The int value in this node
			struct ListNode *next;	//To point to the next node
		};
		int size;
		
		ListNode *head;
		
	public:
		IntNumberList()
		{
			head = nullptr;
			size = 0;
		}
		~IntNumberList();
		void appendNode(int);
		void insertNode(int);
		void deleteNode(int);
		void displayList() const;
		void pop_back();
		void pop_front();
		void push_back(int);
		void push_front(int);
		
};

#include <iostream>
using namespace std;

void IntNumberList::appendNode(int num)
{
	ListNode *newNode;
	ListNode *nodePtr = nullptr;
	
	newNode = new ListNode;
	newNode->number = num;
	newNode->next = nullptr;
	
	if(!head)
		head = newNode;
	else
	{
		nodePtr = head;
		
		while(nodePtr->next)
			nodePtr = nodePtr->next;
		
		nodePtr->next = newNode;
		newNode->next = nullptr;
	}
	size++;
}

void IntNumberList::displayList() const
{
	ListNode *nodePtr = nullptr;
	
	nodePtr = head;
	
	while(nodePtr)
	{
		cout << nodePtr->number << endl;
		nodePtr = nodePtr->next;
	}
}

void IntNumberList::insertNode(int num)
{
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *previousNode = nullptr;
	
	newNode = new ListNode;
	newNode->number = num;
	
	if(!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		previousNode = nullptr;
		
		while(nodePtr != nullptr && nodePtr->number < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		if(previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
	size++;
}

void IntNumberList::deleteNode(int num)
{
	ListNode *nodePtr;
	ListNode *previousNode;
	
	if(!head)
		return;
		
	if(head->number == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		
		while(nodePtr != nullptr && nodePtr->number != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		if(nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
	size--;
}

IntNumberList::~IntNumberList()
{
	ListNode *nodePtr;
	ListNode *nextNode;
	
	nodePtr = head;
	
	while(nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		
		delete nodePtr;
		
		nodePtr = nextNode;
	}
	cout << "\nDestructor is running.";
}

void IntNumberList::pop_back()
{
	ListNode *nodePtr;
	
	nodePtr = head;
	
	while(nodePtr->next)
			nodePtr = nodePtr->next;
	
	delete nodePtr;
}

void IntNumberList::pop_front()
{
	ListNode *nodePtr;
	
	nodePtr = head->next;
	delete head;
	head = nodePtr;
} 

void IntNumberList::push_back(int num)
{
 	appendNode(num);
}

void IntNumberList::push_front(int num)
{
	ListNode *newNode;
	
	newNode = new ListNode;
	newNode->number = num;
	
	newNode->next = head;
	head = newNode;
	size++;
}
#endif
