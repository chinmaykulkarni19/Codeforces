#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    vector<int>res;
    for(int j=0;j<n;j++)
    {
		    int a=0;
		    int b=j;
            int sum=0;
		    while(a<n && b>=0)
		    {
		        sum+=A[a][b];
		        a++;
		        b--;
		    }
            res.push_back(sum);
	}
    for(int i=1;i<n;i++)
	{
		    int a=i;
		    int b=n-1;
            int sum=0;
		    while(a<n && b>=0)
		    {
		        sum+=A[a][b];
		        a++;
		        b--;
		    }
            res.push_back(sum);
	}
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;

}