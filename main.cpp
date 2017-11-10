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
	newQ.printQ();
	cout<<newQ.isempty()<<endl;
	//printNode(*(newQ.getNode()));
	newQ.topNode();
	cout<<"after top"<<endl;
	newQ.printQ();
	cout<<"from out"<<endl;
	printoutQ(newQ);
	newQ.getNode();
    newQ.getNode();
	newQ.getNode();
	newQ.getNode();
	cout<<"after get"<<endl;
	newQ.printQ();

	//david.setnext(&einav);

	//printNode(*(david.getnext()));
	//printNode(yosi);
	system("pause");
}