#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in;
    cin>>in;
    int up=0,low=0;
    for(int i=0;i<in.size();i++)
    {
        char ch=in[i];
        if(ch>='a' && ch<='z')
            low++;
        else
            up++;
    }
    if(low>=up)
    {
        for(int i=0;i<in.size();i++)
        {
            char ch=in[i];
            in[i]=tolower(ch);
        }
    }
    else
    {
        for(int i=0;i<in.size();i++)
        {
            char ch=in[i];
            in[i]=toupper(ch);
        }
    }
    cout<<in;
}