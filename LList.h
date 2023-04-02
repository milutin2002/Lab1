#pragma once
#include "LListNode.h"
#include <exception>
class LList
{
protected:
	LListNode *head, *tail;
public:
	LList();
	~LList();
	bool isEmpty();
	void addToHead(int el);
	int deleteFromHead();
	LListNode* findNodePtr(int el);
	void printAll();
    void sort(bool rastuci=true);
};

