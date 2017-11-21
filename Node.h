#ifndef Node_H
#define Node_H

#include<iostream>

using namespace std;

class Node
{
	static int x;
	char * name;
	int sum;
	int idnode;
	Node *next;
public:
	
	Node(char *);
	Node();
	Node& setname(char*);
	void setnext(Node*);
	void setsum(int);
	
	Node *getnext();
	
	int getsum()const;
	int getid()const;
	char* getname()const;

	
	//void printNode(Node &);


	//friend void printNode(Node &);
	friend ostream & operator <<(ostream& ,const Node &);

};





#endif