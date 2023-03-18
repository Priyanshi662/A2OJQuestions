#include <bits/stdc++.h>

using namespace std;
int main()
{
    int s;
    cin>>s;
    int n;
    cin>>n;
    int dragon,bonus;
    bool flag=true;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>dragon;
        cin>>bonus;
        v.push_back({dragon,bonus});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}