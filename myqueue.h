#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Node.h"


class myqueue
{
	Node *head;
	friend void printoutQ(myqueue);
public:
	myqueue();
	//Node* gethead();
	//void sethead(Node*);
	void add(Node*);
	//void printQ();
	Node* topNode();
	Node* getNode();
	bool isempty();
	 
	friend ostream& operator << (ostream &,const myqueue &);

};






#endif