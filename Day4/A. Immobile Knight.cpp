#include <bits/stdc++.h>
using namespace std;

bool check(int i,int j,int n,int m)
{
    if(i-2>=1 && j-1>=1) return true;
    if(i-2>=1 && j+1<=m) return true;
    if(i-1>=1 && j-2>=1) return true;
    if(i-1>=1 && j+2<=m) return true;
    if(i+1<=n && j-2>=1) return true;
    if(i+2<=n && j-1>=1) return true;
    if(i+2<=n && j+1<=m) return true;
    if(i+1<=n && j+2<=m) return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=1;
        int y=1;
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(check(i,j,n,m)==false)
                {
                    x=i,y=j;
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}