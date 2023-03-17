#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int money=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int maxsum=0;
    for(int i=0;i<m;i++)
    {
        maxsum=max(money,maxsum);
        if(arr[i]<=0)
            money+=abs(arr[i]);
        else  
            money-=arr[i];
    }
    maxsum=max(money,maxsum);
    cout<<maxsum<<endl;
    return 0;
}