#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int count=0;
    for(int a=0;a<=sqrt(n);a++)
    {
        int b=n-a*a;
        if((b*b+a )== m)
            count++;
    }
    cout<<count<<endl;
    return 0;
}