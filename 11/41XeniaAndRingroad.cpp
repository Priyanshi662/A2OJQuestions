#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int time=0;
    long long int prev=1;
    while(m--){
        long long int a;
        cin>>a;
        if(a>prev)
            time+=(a-prev);
        else if(a==prev)
            continue;
        else
        {
            time+=(n-prev+a);
        }
        prev=a;
    }
    cout<<time<<endl;
    return 0;
}