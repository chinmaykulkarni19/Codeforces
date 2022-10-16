#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        string b;
        cin>>a>>b;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=a[i])
            {
                if(b[i]=='R' || a[i]=='R')
                {
                    sum=1;
                }
            }
        }
        if(sum==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}