#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++)
        {
            int read;
            cin>>read;
            arr[i]=read;
        }
    while(n!=0)
    {
        for(int i=0;i<7;i++)
        {
            if(arr[i]==0)
                continue;
            if(arr[i]<n)
                n-=arr[i];
            else 
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}