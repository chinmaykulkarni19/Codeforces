#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l,n;
    int ans=0;
    int d=0;
    cin>>l>>n;
    while(n--)
    {
        int x;
        char c;
        cin>>x>>c;
        if(c=='C')
        {
            d+=x;
            if(d>=l)
            {
                ans+=d/l;
                d=d%l;
            }
        }
        else{
            d-=x;
            if(d<=-l)
            {
                ans+=d/l;
                d=d%l;
            }
        }
    }
    cout<<ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}