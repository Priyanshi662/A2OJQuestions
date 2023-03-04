#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y;
    int c1=0;
    int r1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x==1)
            c1++;
        if(y==1)
            r1++;
    }
    int c0=min(c1,abs(n-c1));
    int r0=min(r1,abs(n-r1));
    cout<<c0+r0<<endl;
    return 0;
}