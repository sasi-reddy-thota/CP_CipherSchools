#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int x) {
		data=x;
		next=NULL;
	}
};
void Detectandremoveloop(Node*head)
{
	Node* slow=head;
	Node* fast=head;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
		if(slow==fast)
			break;
	}
	if(slow!=fast)
		return;
	slow=head;
	while(slow->next!=fast->next)
	{
		slow=slow->next;
		fast=fast->next;
	}
	fast->next=NULL;
}
int main()
{
	Node *head=new Node(1);
	head->next=new Node(2);
	head->next->next=new Node(3);
	head->next->next->next=new Node(4);
	head->next->next->next->next=new Node(5);
	head->next->next->next->next->next=head->next->next;
	Detectandremoveloop(head);
    return 0;
}