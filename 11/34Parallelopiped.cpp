#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int x,y,z;
    int sum=0;
    x=sqrt((a1*a2/a3));
    y=sqrt((a2*a3)/a1);
    z=sqrt((a1*a3)/a2);
    sum=4*(x+y+z);
    cout<<sum<<endl;
    return 0;
}