#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
Node* top;
void push(int x)
{
	Node* n_node=new Node();
	n_node->data=x;
	n_node->next=top;
	top=n_node;
}
void pop()
{
	if(top==NULL)
		cout<<"we cannot pop bro";
	Node* temp=top;
	top=top->next;
	 temp->next=NULL;
	 delete temp;

}
int isEmpty()
{
	return(top==NULL);
}
int peek()
{
	if(!isEmpty())
		return top->data;
	else
		cout<<"NO element is there bro";exit(1);
}


void display()
{
	if(top==NULL)
		cout<<"stack is empty bro";
	Node* temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	cout<<"\n";
	display();
	cout<<"\n"<<peek()<<"\n";
	pop();
	display();
	push(1);
	push(2);
	push(4);
	cout<<"\n";
	display();
	

    return 0;
}