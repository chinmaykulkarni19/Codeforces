#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int sum=0;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
        {
            sum+=1;
        }
        else{
            sum-=1;
        }
    }
    cout<<sum<<endl;
}