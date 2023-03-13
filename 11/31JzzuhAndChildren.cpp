#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double m;
    cin>>n>>m;
    double maxele=0;
    int index=1;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        double d=ceil(x/m);
        if(maxele<=d)
        {
            index=i;
            maxele=d;
        }
    }
    cout<<index<<endl;
    return 0;
}