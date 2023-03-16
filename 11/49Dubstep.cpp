#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string res="";
    int n=s.size();
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        string temp=s.substr(i,3);
        // cout<<temp<<" ";
        if(temp=="WUB")
        {    
            if(flag)
                res+=" ";
            i+=2;
            flag=false;
        }
        else
        {
            res+=(temp[0]);
            flag=true;
        }
        // cout<<i<<endl;
    }
    cout<<res<<endl;
    return 0;
}