#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int total=0;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            total+=4;
        }
        else if(s=="Cube")
        {
            total+=6;
        }
        else if(s=="Octahedron")
        {
            total+=8;
        }
        else if(s=="Dodecahedron")
        {
            total+=12;
        }
        else if(s=="Icosahedron")
        {
            total+=20;
        }
    }
    cout<<total<<endl;
}