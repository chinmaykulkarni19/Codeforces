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
        int a=stoi(s);
        int k=0;
        vector<int>v;
        while(k<6)
        {
            int b=a%10;
            v.push_back(b);
            a=a/10;
            k++;
        }
        int aa=0,bb=0;
        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
                aa+=v[i];
            }
            else{
                bb+=v[i];
            }
        }
        if(aa==bb)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}