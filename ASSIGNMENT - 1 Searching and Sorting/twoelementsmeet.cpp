#include<bits/stdc++.h>
using namespace std;

bool meeting(int x1,int x2,int v1,int v2)
{
	if((x1>x2&&v1>v2)||(x2>x1&&v2>v1))
		return 0;
	if(x1<x2)
	{
		swap(x1,x2);
		swap(v1,v2);
	}
	return ((x1-x2)%(v1-v2)==0);
}

int main()
{
	int x1=6,x2=4,v1=6,v2=8;
	(meeting(x1,x2,v1,v2))?cout<<"they will meet":cout<<"They will not meet";
    return 0;
}