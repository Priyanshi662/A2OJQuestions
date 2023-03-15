#include<string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    string rev;
    cin>>rev;
    reverse(n.begin(),n.end());
    if(rev==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
