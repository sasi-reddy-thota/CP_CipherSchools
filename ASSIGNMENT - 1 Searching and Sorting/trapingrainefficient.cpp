#include<bits/stdc++.h>
using namespace std;

int trapingrain(vector<int> &v)
{
	int n=v.size(),result=0;
	int lmax[n];
	int rmax[n];
	lmax[0]=v[0];
	for(int i=1;i<n;i++)
		lmax[i]=max(lmax[i-1],v[i]);
	rmax[n-1]=v[n-1];
	for(int i=n-2;i>=0;i--)
		rmax[i]=max(rmax[i-1],v[i]);
	for(int i=1;i<n-1;i++)
		result+=(min(lmax[i],rmax[i])-v[i]);
	return result;
}
int main()
{
	vector<int> v{3,1,2,4};
	cout<<trapingrain(v);
    return 0;
}