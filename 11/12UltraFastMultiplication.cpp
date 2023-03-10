#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3="";
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
            s3+='0';
        else
            s3+='1';
    }
    cout<<s3<<endl;
    return 0;
}