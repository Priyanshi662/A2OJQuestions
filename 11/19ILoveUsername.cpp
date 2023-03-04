#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int minx=10000;
    int maxx=0;
    int count=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>maxx || x<minx )
        {    
            maxx=max(maxx,x);
            minx=min(minx,x);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}