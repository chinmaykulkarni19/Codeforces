#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[6][6];
    int r,c;
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                r=abs(i-3);
                c=abs(j-3);
                cout<<r+c<<endl;
            }
        }
    }
    return 0;

}