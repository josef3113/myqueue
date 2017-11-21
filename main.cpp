#include <iostream>
#include "Node.h"
#include "myqueue.h"

using namespace std;


void main()
{
	myqueue newQ;
	Node yosi;
	Node david("david");
	Node einav("einav");
	yosi.setname("yosi").setsum(5);
	//newQ.sethead(&david);
	cout<<newQ.isempty()<<endl;
	newQ.add(&einav);
	newQ.add(&david);
	newQ.add(&yosi);
	cout<<newQ;
	cout<<newQ.isempty()<<endl;
	//printNode(*(newQ.getNode()));
	newQ.topNode();
	cout<<"after top"<<endl;
	cout<<newQ;
	cout<<"from out"<<endl;
	printoutQ(newQ);
	newQ.getNode();
    newQ.getNode();
	newQ.getNode();
	newQ.getNode();
	cout<<"after get"<<endl;
	cout<<newQ;

	//david.setnext(&einav);

	//printNode(*(david.getnext()));
	//printNode(yosi);
	system("pause");
}