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
int Node::getsum()const
{
	return sum;
}

void Node::setsum(int x)
{
	sum = x;
}

int Node::getid()const
{
   return idnode;
}
char* Node::getname()const
{
	return name;
}
ostream & operator << (ostream & out,const  Node &toprint)
{
	out << "nodename is:" << toprint.getname() << " sum is:" << toprint.getsum() <<" id is:"<<toprint.getid()<< endl;
	return out;
}
//ostream&  operator << (ostream &output,const Node &A)
//{
//	output<<"name is:"<<A.name<<"sum is:"<<A.sum<<"id is:"<<A.idnode<<endl;
//	return output;
//}

#endif
