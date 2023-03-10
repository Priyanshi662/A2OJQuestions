#include<string> 
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    unordered_map<char,int> mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<b.size();i++)
    {
        mp[b[i]]++;
    }
    unordered_map<char,int> check;
    for(int j=0;j<c.size();j++)
    {
        check[c[j]]++;
    }
    bool flag=true;
    for(int i=0;i<a.size();i++)
    {
        if(check.find(a[i])==check.end()||mp[a[i]]!=check[a[i]])
        {
            flag=false;
            break;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(check.find(b[i])==check.end()||mp[b[i]]!=check[b[i]])
        {
            flag=false;
            break;
        }
    }
    for(int j=0;j<c.size();j++)
    {
        if(mp.find(c[j])==mp.end()|| check[c[j]]!=mp[c[j]])
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}