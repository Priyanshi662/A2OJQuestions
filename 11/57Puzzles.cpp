#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int i=0;
    int j=n-1;
    int mindiff=INT_MAX;
    while(j<m)
    {
        mindiff=min(mindiff,abs(arr[j]-arr[i]));
        i++,j++;
    }
    cout<<mindiff<<endl;
    return 0;
}