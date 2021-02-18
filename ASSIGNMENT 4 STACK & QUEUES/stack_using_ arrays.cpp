#include<bits/stdc++.h>
using namespace std;
struct mystack
{
	int *arr;
	int cap;
	int top;
	mystack(int c)
	{
		cap=c;
		arr=new int[cap];
		top=cap-1;
	}
	void push(int x)
	{
		if(top==cap-1)
			cout<<"sorry overflow";return;
		top++;
		arr[top]=x;
	}
	int pop()
	{
		if(top==-1)
			cout<<"Under flow";return INT_MIN;
		int res=arr[top];
		top--;
		return res;
	}
	int peek()
	{
		if(top=-1)
			cout<<"stock is empty";return INT_MIN;
		return (top+1);

	}
	int size()
	{
		return (top+1);
	}
	bool isempty()
	{
		return top==-1;
	}
};

int main()
{
	mystack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.pop();
	return 0;

    
}