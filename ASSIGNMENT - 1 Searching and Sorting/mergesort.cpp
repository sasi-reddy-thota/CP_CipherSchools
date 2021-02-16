#include<bits/stdc++.h>
using namespace std;
vector<int> mergesort(vector<int> &v1,vector<int> &v2)
{
	vector<int> res(v1.size()+v2.size());
	int i=0,j=0,k=0;
	while(i<v1.size()&&j<v2.size()){
		if(v1[i]<=v2[j])
			res[k++]=v1[i++];
		else
			res[k++]=v2[j++];
	}
	while(i<v1.size())
		res[k++]=v1[i++];
	while(j<v2.size())
		res[k++]=v2[j++];
	return res;


}

int main()
{
	vector<int> v1={1,3,5,7,9,11};
	vector<int> v2={2,4,6,8};
	vector<int> r=mergesort(v1,v2);
	for(auto i:r)
		cout<<i<<" ";

    return 0;
}