#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
};
void push(Node** head_ref,int new_data){
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
void print(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
void deleten(Node** head_ref,int pos){
	Node* temp=*head_ref; 
	if(temp==NULL)
		return;
	if(pos==0){
		*head_ref=temp->next;
		delete temp;
		return;
	}
	for(int i=0;i<pos-1&&temp!=NULL;i++){
		temp=temp->next;
	}
	if(temp==NULL||temp->next==NULL)
		return;
	Node* next=temp->next->next;
	delete temp->next;
	temp->next=next;
}
int main(){
	Node* head=NULL;
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	print(head);
	cout<<endl;
	deleten(&head,2);
	print(head);
	return 0;
}