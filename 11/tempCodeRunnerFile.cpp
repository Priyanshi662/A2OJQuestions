#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    int mindiff=INT_MAX;
    int prev=arr[0];
    int first,second;
    int previn=0;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-prev)<mindiff)
        {
            first=previn+1;
            second=i+1;
            mindiff=abs(arr[i]-prev);
        }
        previn=i;
    }
    if(abs(arr[n-1]-arr[0])<mindiff)
    {
        second=1;
        first=n;
    }
    cout<<first<<" "<<second<<endl;
    return 0;
}