#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
void push(Node** head_ref,int new_data) {
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
Node* addnode(int d)
{
	Node* new_node=new Node();
	new_node->data=d;
	new_node->next=NULL;
	return new_node;
}
Node* sumoftwolinkedlists(Node* first,Node* second) {
	Node* res=NULL;
	Node* prev=NULL;
	Node* current;
	int sum,carry=0;
	while(first!=NULL||second!=NULL)
	{
		sum=carry+(first?first->data:0)+(second?second->data:0);
		carry=(sum>=10)?1:0;
		sum=sum%10;
		current=addnode(sum);
		if(res==NULL)
			res=current;
		else
			prev->next=current;
		prev=current;
		if(first)
			first=first->next;
		if(second)
			second=second->next;
	}
	if(carry>0)
		current->next=addnode(carry);
	return res;
}
int main()
{
	Node* first=NULL;
	Node* second=NULL;
	Node* result=NULL;
	push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    cout<<"first  list ";
    printlinkedlist(first);
    push(&second, 4);
    push(&second, 8);
    cout<<"\n";
    cout << "Second List ";
    printlinkedlist(second);
    cout<<"\n";
    result=sumoftwolinkedlists(first,second);
    printlinkedlist(result);

    return 0;
}