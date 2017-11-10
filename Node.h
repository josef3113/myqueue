#ifndef Node_H
#define Node_H

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
	Node *getnext();
	int getsum();
	void setsum(int);

	friend void printNode(Node &);
	

};

void printNode(Node &);



#endif