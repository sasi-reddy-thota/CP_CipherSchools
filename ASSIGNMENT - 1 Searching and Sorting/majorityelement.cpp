#include<bits/stdc++.h>
using namespace std;

int getcondiadate(vector<int> &v){
	int c=1,condidate=v[0];
	for(int i=1;i<v.size();i++)
	{
		if(v[i]==condidate)
			c++;
		else
			c--;
		if(count==0){
			c=1;
			condidate=v[i];
		}
		
	}
	return condidate;
}
bool majorityelement(vector<int>v)
{
	int con=getcondiadate(v);
	for(int i=0;i<v.size();i++)
	{
		int count=0;
		if(v[i]==con)
			count++;
		
	}
	int n=v.size();
	if(n/2<count)
		return 1;
	else
		return 0;
}
int main()
{
	vector<int> v={1,1,1,1,12,34,3};
    (majorityelement(v))?cout<<"Yes":cout<<"No";
    return 0;
}