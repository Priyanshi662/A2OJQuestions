#include <bits/stdc++.h>
using namespace std;
// remove all vowels
void remvowels(string s,string& res)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a'|| s[i]=='e' || s[i]=='y'|| s[i]=='i' ||s[i]=='o' ||s[i]=='u')
        {
            continue;
        }
        else
        {
            res+=s[i];
        }
    }
    return;
}
int main()
{
    string s;
    cin>>s;
    string res="";
    remvowels(s,res);
    for(int i=0;i<res.size();i++)
    {
        cout<<"."<<res[i];
    }
    return 0;
}