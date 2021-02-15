#include<bits/stdc++.h>
using namespace std;

int find(vector<vector<int>> v,int n,int x)
{
	if(n==0)
		return -1;
	if(x>v[n-1][n-1]||x<v[0][0])
		return -1;
	int i=0,j=n-1;
	while(i<n&&j>=0)
	{
		if(v[i][j]==x)
		{
			cout<<"element found at"<<i<<","<<j;
			return 1;

		}
		if(v[i][j]>x)
			j--;
		else
			i++;
	}
	cout<<"not found";
	return 0;

}
int main()
{
	vector<vector<int>>mat = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    find(mat, 4, 29);
    return 0;
}