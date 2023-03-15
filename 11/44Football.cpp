#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    while(n--)
    {
        string team;
        cin>>team;
        mp[team]++;
    }
    int mxcount=0;
    string mxteam;
    for(auto it:mp)
    {
        if(mxcount<it.second)
        {
            mxcount=it.second;
            mxteam=it.first;
        }
    }
    cout<<mxteam<<endl;
    return 0;
}