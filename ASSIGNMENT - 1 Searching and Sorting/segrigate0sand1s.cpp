#include<bits/stdc++.h>
using namespace std;

vector<int> segregate(vector<int> &v,int n)
{
	int type1=0,type0=n-1;
	while(type1<type0)
	{
		if(v[type1]==0)
		{
			swap(v[type1],v[type0]);
			type0--;
		}
		else
			type1++;
	}
	return v;

}
int main()
{
	int n=10;
	vector<int> v{1,0,1,0,1,0,0,0,0,1};
	auto s=segregate(v,n);
	for(auto x:s)
		cout<<x<<" ";
    return 0;
}