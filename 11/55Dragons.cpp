#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int n;
    cin>>n;
    int dragon,bonus;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        cin>>dragon;
        cin>>bonus;
        if(s>=dragon)
        {
            s+=bonus;
        }
        else
        {
            flag=false;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}