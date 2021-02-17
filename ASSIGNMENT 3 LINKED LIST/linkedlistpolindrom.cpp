#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	char data;
	Node* next;
};
void push(Node **head_ref,char new_data){
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
bool isPolindrom(Node *head)
{
	Node* ptr=head;
	stack<char> s;
	while(ptr!=NULL)
	{
		s.push(ptr->data);
		ptr=ptr->next;
	}
	while(head!=NULL)
	{
		int i=s.top();s.pop();
		if(i!=head->data)
			return 0;
		head=head->next;

	}
	return 1;
}
int main()
{
	Node* head=NULL;
	push(&head,'r');
	push(&head,'a');
	push(&head,'d');
	push(&head,'a');
	push(&head,'r');
	printlinkedlist(head);
	cout<<"\n";
	isPolindrom(head)?cout<<"it is a Polindrom":cout<<" it is not a Polindrom";


    return 0;
}