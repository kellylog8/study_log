#include <iostream>
using namespace std;

#include "Node.h"

int main()
{
	Node header;
	Node n1, n2, n3;

	header.v = -1;
	n1.v = 1;
	n2.v = 2;
	n3.v = 3;

	header.p = &n1;
	n1.p = &n2;
	n2.p = &n3;
	n3.p = nullptr;

	Node* iter;
	iter = &header;

	/*cout << (*(*iter).p).v << endl;
	cout << iter->p->v << endl;
	cout << header.p->v << endl;*/

	//cout << iter->p->v << endl;
	//cout << iter->p->p->v << endl;
	//cout << iter->p->p->p->v << endl;

	iter = &header;
	//iter = &n1;
	iter = iter->p;

	iter = &header;
	//iter = iter->p->p;
	iter = iter->p;
	iter = iter->p;

	iter = &header;
	//iter = iter->p->p->p;
	iter = iter->p;
	iter = iter->p;
	iter = iter->p;

	for (int i = 0; i < 3; i++)
	{
		iter = &header;

		for (int j = 0; j < i + 1; j++)	
		{
			iter = iter->p;
		}
		cout << iter->v << " -> ";
	}


	return 0;
}