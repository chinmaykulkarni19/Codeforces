#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        double y=sum-arr[i];
        double ans=double(y)/double(n-1);
        if(ans==arr[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}