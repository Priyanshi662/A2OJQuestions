#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    // equilibrium is achieved when all the forces acting on the system are zero at all the sides
    if(sumx==0 && sumy==0 && sumz==0)
        cout<<"YES"<<endl;
    else   
        cout<<"NO"<<endl;
    return 0;
}
