#ifndef NODE_H
#define NODE_H
#include "Node.h"
#include <iostream>



using namespace std;

int Node::x=0; //מאפס את static פעם אחת



Node::Node()
{
	x++;
	idnode=x;
	
	next=NULL;
}

Node::Node(char* nodename)
{
	x++;
	idnode = x;
	
	name = nodename;
	sum = 0;
	next=NULL;

}
Node& Node::setname(char * newname)
{
	this->name=newname;
	return *this;
}
void Node::setnext(Node *tojoin)
{
	next=tojoin;
}

Node* Node::getnext()
{
	return next;
}
int Node::getsum()
{
	return sum;
}

void Node::setsum(int x)
{
	sum = x;
}


void printNode(Node &toprint)
{
	cout << "nodename is:" << toprint.name << " sum is:" << toprint.sum <<" id is:"<<toprint.idnode<< endl;
}

#endif
