#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0;
        if(s[0]=='y' || s[0]=='Y')
        {
            i++;
        }
        if(s[1]=='e' || s[1]=='E')
        {
            i++;
        }
        if(s[2]=='s' || s[2]=='S')
        {
            i++;
        }
        if(i==3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}