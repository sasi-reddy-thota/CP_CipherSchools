#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
void push(Node** head_ref,int new_data)
{
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
void printlinkedlist(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
void reverselinkedlist(Node** head_ref)
{
	Node* curr=*head_ref;
	Node* prev=NULL;
	Node* next=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*head_ref=prev;
}
int main()
{
	Node* head=NULL;
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	printlinkedlist(head);
	reverselinkedlist(&head);
	cout<<"\n";
	printlinkedlist(head);
    return 0;
}