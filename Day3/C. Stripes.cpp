#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[8];
        for(int i=0;i<8;i++)
        {
            cin>>s[i];
        }
        string ans="-1";
        for(int i=0;i<8;i++)
        {
            int r=0;
            int b=0;
            for(int j=0;j<8;j++)
            {
                if(s[i][j]=='R')
                {
                    
                    r++;
                }

            }
            if(r==8)
            {
                ans='R';
                break;
            }
        }
        if(ans=="R")
        {
            cout<<ans<<endl;
        }
        else{
            cout<<'B'<<endl;
        }
    }
}