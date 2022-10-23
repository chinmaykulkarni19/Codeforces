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
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            cin>>res[i];
        }
        sort(res.begin(),res.end());
        cout<<res[n-1]+res[n-2]-res[0]-res[1]<<endl;
        
    }
    return 0;
}