#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    char prev=s[0];
    for(int i=0;i<s.size();i++)
    {
        if(count==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s[i]==prev)
        {
            count++;
        }
        else
        {
            prev=s[i];
            count=1;
        }
    }
    if(count==7)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}