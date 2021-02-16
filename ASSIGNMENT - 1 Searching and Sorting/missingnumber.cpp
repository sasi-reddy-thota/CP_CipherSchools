#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int> &v)
{
	int n=v.size();
	int x1=v[0];
	int x2=1;
	for(int i=1;i<n;i++)
		x1^=v[i];
	for(int i=2;i<=n+1;i++)
		x2^=i;
	return(x1^x2);
}
int main()
{
	vector<int> v{ 1, 2, 4, 5, 6 ,7,8,9,10,11};
	cout<<missingnumber(v);
    return 0;
}