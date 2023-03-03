#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1=0,l0=0,r1=0,r0=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int left,right;
        cin>>left>>right;
        if(left==0)
            l0++;
        else
            l1++;
        if(right==0)
            r0++;
        else
            r1++;
    }
    int res=min(l0,l1)+min(r0,r1);
    cout<<res<<endl;
    return 0;
}