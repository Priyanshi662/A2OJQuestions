#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long mini=INT_MAX;
    int index=0;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        arr[i]=x;
        if(x<mini)
        {
            mini=x;
            index=i;
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mini)
        {
            count++;
        }
        if(count==2)
        {
            break;
        }
    }
    if(count==2)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<index+1<<endl;
    return 0;
}