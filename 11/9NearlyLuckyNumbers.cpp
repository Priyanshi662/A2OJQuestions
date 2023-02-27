#include <bits/stdc++.h>
using namespace std;
bool checklucky(int n)
{
    int x=n;
    int flag=1;
    while(x!=0)
    {
        int d=x%10;
        x=x/10;
        if(d==7 || d==4)
            continue;
        else
            flag=0;
    }
    if(flag==0)
        return false; 
    return true;
}
int main()
{
    int n;
    cin>>n;
    int count=0;
    int x=n;
    while(x!=0)
    {
        int d=x%10;
        if(d==7 || d==4)
            count++;
        x=x/10;
    }
    if(checklucky(count))
        cout<<"YES";
    else   
        cout<<"NO";
    return 0;
}