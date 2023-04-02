#include "LList.h"


LList::LList()
{
	head=NULL;
}


LList::~LList()
{
	while(!isEmpty())
	{
		int tmp = deleteFromHead();
	}
}


bool LList::isEmpty()
{
	return head==NULL;
}

void LList::addToHead(int el)
{
	head = new LListNode(el, head);
}



int LList::deleteFromHead()
{
	if(isEmpty())
		throw "Lista je prazna";
	int el = head->info;
	LListNode *tmp = head;
	head = head->next;
	delete tmp;
	return el;
}



LListNode* LList::findNodePtr(int el)
{
	if(isEmpty())
		throw "List is empty";
	LListNode *ret = head;
	while(ret!=NULL && ret->info!=el)
	{
		ret = ret->next;
	}
	return ret;
}







void LList::printAll()
{
	LListNode *tmp = head;
	while(tmp!=NULL)
	{
		cout<<tmp->print() << " ";
		tmp=tmp->next;
	}
	cout << endl;
}







void LList::sort(bool rastuci) {
    int znak=1;
    if(!rastuci){
        znak=-1;
    }
    LListNode *prev=head,*curr=head->next;
    while(curr!=nullptr){
        LListNode *iprev= nullptr,*icurr=head;
        while(znak*icurr->info<znak*curr->info){
            iprev=icurr;
            icurr=icurr->next;
        }
        if(icurr!=curr){
            prev->next=curr->next;
            if(iprev== nullptr){
                curr->next=head;
                head=curr;
            }
            else {
                iprev->next = curr;
                curr->next = icurr;
            }
        }
        prev=curr;
        curr=curr->next;
    }
}
