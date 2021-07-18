#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};

void insertAtFirst(Node** head,int new_data)
{
	Node* new_node = new Node(); //allocate new node memory from heap
	new_node->data = new_data; 
    new_node->next = (*head);
    (*head) = new_node;
}

void insertAfter(Node* prev_node,int new_data)
{
	if(prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
	}

	Node* new_node = new Node(); //allocate new node memory from heap
	new_node->data = new_data; //put the data in the new node
	new_node->next = prev_node->next; //make next of new node as next of prev node
	prev_node->next = new_node; //linking the new node reference to the next of prev node
}

void deleteAtPosition(Node** head,int position)
{
	if(*head == NULL)
		return;

	Node* temp = *head;

	if(position == 0)
	{
		*head = temp->next;
		free(temp);
		return;
	}

	for(int i=0; temp!=NULL && i<position-1; i++)
		temp=temp->next;

	if(temp == NULL || temp->next == NULL)
		return;

	Node* next = temp->next->next;

	free(temp->next);

	temp->next = next;
}

int getCount(Node* head)
{
	int count=0;
	Node* current = head;
	while(current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}

void printList(Node* node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;

	insertAtFirst(&head,6);
	insertAtFirst(&head,7);
	insertAtFirst(&head,1);
	cout<<"List is: \n";
	printList(head);

	insertAfter(head->next,8);
	cout<<"Now List is: \n";
	printList(head);
	insertAtFirst(&head,4);
	cout<<"now list is: \n";
	printList(head);
    deleteAtPosition(&head,2);
    cout<<"List after deletion is: \n";
    printList(head);
    
    cout<<"no. of nodes in linked list: \n";
    cout<<getCount(head);


	return 0;
}