#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int res=0;
    for(int i=0;i<a.size();i++)
    {
        if(tolower(a[i])<tolower(b[i]))
        {    res=-1; break; }
        else if(tolower(a[i])>tolower(b[i]))
        {    res=1;  break; }
    }
    cout<<res<<endl;
    return 0;
}