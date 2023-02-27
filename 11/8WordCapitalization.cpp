#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin>>in;
    if(in[0]>='a' && in[0]<='z')
    {
        in[0]=toupper(in[0]);
    }
    cout<<in;
}