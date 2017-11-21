
#include"Node.h"
#include "myqueue.h"

#include<iostream>

using namespace std;


myqueue::myqueue()
{
	head=NULL;
}



//Node* myqueue::gethead()
//{
//	return head;
//}
//
//void myqueue::sethead(Node* newhead)
//{
//	head=newhead;
//}
void myqueue::printQ()
{
	if(head==NULL)
	{
		cout<<"Q is empty"<<endl;
	}
	else
	{
		Node *temp=head;
		
		while(temp->getnext()!=NULL)
		{
			cout<<(*temp);
			temp=temp->getnext();
		}
		cout<<(*temp);
	}
}
Node* myqueue::topNode()
{
	return head;
}
Node* myqueue::getNode()
{
	if(head!=NULL)
	{
		Node* temp=head;
		head=head->getnext();
		cout<<"the node get out"<<endl;
		temp->setnext(NULL);
		return temp;
	}
	else
	{
		cout<<"EROR:queue is empty"<<endl;
		return NULL;
	}
}
bool myqueue::isempty()
{
     if(head==NULL)
	 {
		 cout<<"queue is empty"<<endl;
	    return true;
	 }
	 else
	 {
		 cout<<"queue is not empty"<<endl;
		 return false;
	 }
}
void myqueue::add(Node* tojoin)
{
	if(head==NULL)
	{
		head=tojoin;
	}
	else
	{
		Node* temp=head;
		while(temp->getnext()!=NULL)
		{
			temp=temp->getnext();
		}
		temp->setnext(tojoin);
	}
}

void printoutQ(myqueue toprint)
{
	if(toprint.head==NULL)
	{
		cout<<"Q is empty"<<endl;
	}
	else
	{
		Node *temp=toprint.head;
		
		while(temp->getnext()!=NULL)
		{
			cout<<(*temp);
			temp=temp->getnext();
		}
		cout<<(*temp);
	}
}