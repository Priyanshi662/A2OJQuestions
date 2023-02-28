#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int count=0;
    long long int x=n;
    while(x!=0)
    {
        int d=x%10;
        if(d==7 || d==4)
            count++;
        x=x/10;
    }
    if(count==7 || count==4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}