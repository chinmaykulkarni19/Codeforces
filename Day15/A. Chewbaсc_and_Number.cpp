#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t;
    cin>>t;
    int len=t.size();
    int f=t[0]-'0';
    if(f==9)
    {
        t[0]='9';
    }
    else{
        if(f>4)
        {
            t[0]=((9-f)+'0');
        }
    }
    for(int i=1;i<len;i++)
    {
        int a=t[i]-'0';
        if(a<5 || a==0)
        {
            continue;
        }
        else{
            t[i]=((9-a)+'0');
        }
    }
    cout<<t<<endl;
}