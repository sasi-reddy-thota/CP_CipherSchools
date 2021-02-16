#include<bits/stdc++.h>
using namespace std;

int platformsneeded(vector<int> a,vector<int> d)
{
	int n=a.size();
	sort(a.begin(),a.end());
	sort(d.begin(),d.end());
	int i=1,j=0,platform=1;
	int result=1;
	while(i<n&&j<n)
	{
		if(a[i]<=d[i])
		{
			platform++;
			i++;
		}
		else if(a[i]>d[i])
		{
			platform--;
			j++;
		}
	    if(platform>result)
	    	result=platform;

	}
	return result;

}
int main()
{
	vector<int> a{ 900, 940, 950, 1100, 1500, 1800 };
	vector<int> d{ 910, 1200, 1120, 1130, 1900,2000 };
	cout<<platformsneeded(a,d);
    return 0;
}