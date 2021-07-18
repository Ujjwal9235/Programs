#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};
void printList(Node* n)
{
	while(n!= NULL)
	{
       cout<<n->data;
       n=n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* thired = NULL;

	head = new Node();
	second = new Node();
	thired = new  Node();

	head->data = 40;
	head->next = second;

	second->data = 60;
	second->next = thired;
    
    thired->data =80;
    thired->next = NULL;



    printList(head);

    return 0;


}