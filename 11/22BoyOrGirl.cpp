#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]==1)
            count+=1;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}