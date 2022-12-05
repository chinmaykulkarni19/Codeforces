#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=N-1;
    int ans=INT_MAX;
    while(l<h)
    {
        int mid=(l+h)/2;
        if((mid!=0 || arr[mid-1]<=arr[mid]) && (mid!=N-1 || arr[mid]>=arr[mid+1]))
        {
            ans=min(ans,mid);
            h=mid-1;
        }
        else if(mid>0 && arr[mid]>arr[mid-1])
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(ans==INT_MAX)
    {
        return -1;
    }
    else{
        return ans;
    }
}