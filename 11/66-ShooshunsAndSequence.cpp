#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // find if there is any element that is not equal in k to n elements 
    for(int i=k;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            cout<<"-1";
            return 0;
        }
    }
    for(int j=k-1;j>=0;j--)
    {
        if(arr[j]!=arr[j-1])
        {
            cout<<j;
            return 0;
        }
    }
    return 0;
}
