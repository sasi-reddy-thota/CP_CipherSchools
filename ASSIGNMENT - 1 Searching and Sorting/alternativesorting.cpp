#include<bits/stdc++.h>
using namespace std;

vector<int> alternativesorting(vector<int> v,int n)
{
	sort(v.begin(),v.end());
	int i=0,j=n-1,k=0;
	while(i<j)
	{
		v[k++]=v[j--];
		v[k++]=v[i++];
	}
	if(n/2!=0)
		v[k]=v[i];
	return v;
}
int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9};
	auto a=alternativesorting(v,v.size());
	for(auto x:a)
		cout<<x<<" ";
    return 0;
}