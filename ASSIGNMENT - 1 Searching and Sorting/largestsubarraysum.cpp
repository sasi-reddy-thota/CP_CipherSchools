#include<bits/stdc++.h>
using namespace std;

int largestsum(vector<int> &v)
{
	int n=v.size();
	int max_sofar=INT_MIN;
	int max_end=0;
	for(int i=0;i<n;i++)
	{
		max_end+=v[i];
		if(max_end>max_sofar)
			max_sofar=max_end;
		if(max_end<0)
			max_end=0;
	}
	return max_sofar;
}
int main()
{
	vector<int> v{-2, -3, 4, -1, -2, 1, 5, -3};
	cout<<largestsum(v);
   return 0;
}