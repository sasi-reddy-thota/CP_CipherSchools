#include<bits/stdc++.h>
using namespace std;

int firstoccurance(vector<int> v,int x,int n)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=low+high/2;
		if(v[mid]<x)
			low=mid+1;
		else if(v[mid]>x)
			high=mid-1;
		else
		{
			res=mid;
			high=mid-1;
		}
	}
	return res;
}
int lastoccurance(vector<int> v,int x,int n)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=low+high/2;
		if(v[mid]<x)
			low=mid+1;
		else if(v[mid]>x)
			high=mid-1;
		else
		{
			res=mid;
			low=mid+1;
		}
	}
	return res;
}
int main()
{
	vector<int> v={1,2,2,2,2,2,2,2,4};
	cout<<"first occurance"<<firstoccurance(v,2,v.size())<<endl;
	cout<<"last occurance"<<lastoccurance(v,2,v.size());

    return 0;
}