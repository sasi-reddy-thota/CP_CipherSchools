#include<bits/stdc++.h>
using namespace std;

int trapingwater(vector<int> v)
{
	int result=0,n=v.size();
	for(int i=1;i<n-1;i++)
	{
		int lmax=v[i];
		for(int j=0;j<i;j++)
			lmax=max(lmax,v[j]);
		int rmax=v[i];
		for(int j=i+1;j<n;j++)
			rmax=max(rmax,v[j]);
		result+=(min(lmax,rmax)-v[i]);
	}
	return result;
}
int main()
{
	vector<int> v{3,5,2,3};
	cout<<trapingwater(v);
    return 0;
}