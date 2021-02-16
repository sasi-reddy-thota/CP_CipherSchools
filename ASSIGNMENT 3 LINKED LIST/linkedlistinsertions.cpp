#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};
void insertatbeg(Node **head_ref,int n_data)
{
	Node* n_node=new Node();
	n_node->data=n_data;
	n_node->next=(*head_ref);
	(*head_ref)=n_node;
}
void insertafterpoint(Node *prev_node,int n_data)
{
	if(prev_node==NULL)
		cout<<"Not possible";return;
	Node* n_node=new Node();
	n_node->data=n_data;
	n_node->next=prev_node->next;
	prev_node->next=n_node;

}
void insertattheend(Node **head_ref,int n_data)
{
	Node* n_node=new Node();
	n_node->data=n_data;
	n_node->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=n_node;
		return;
	}
	Node* last=*head_ref;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=n_node;

}
void traversal(Node *node)
{
	Node* nnode=node;
	while(nnode!=NULL)
	{
		cout<<nnode->data<<" ";
		nnode=nnode->next;
	}

}

int main()
{
	Node* head=NULL;
	insertatbeg(&head,1);
	insertatbeg(&head,2);
	insertatbeg(&head,3);
	insertatbeg(&head,4);
	insertafterpoint(head,8);
	insertatbeg(&head,5);
	insertatbeg(&head,6);
	traversal(head);
	cout<<"\n";
	insertatbeg(&head,6);
	traversal(head);
		cout<<"\n";

	insertattheend(&head,7);
	traversal(head);
	
	cout<<"\n";
	traversal(head);


    return 0;
}