#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int flag= true;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            flag=false;
        }
    }
    if(s[0]!='1'|| s.find("444")!=s.npos) 
        flag=false;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}