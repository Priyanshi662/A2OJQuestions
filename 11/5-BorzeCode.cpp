#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin>>in;
    int n=in.size();
    string res="";
    for(int i=0;i<n;i++)
    {
        if(in[i]=='.')
        {
            res.push_back('0');
        }
        else if(in[i]=='-' && i+1<n){
            if(in[i+1]=='.')
                res.push_back('1');
            else
                res.push_back('2');
            i++;
        }
    }
    cout<<res<<endl;   
}