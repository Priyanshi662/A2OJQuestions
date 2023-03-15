#include <bits/stdc++.h>
using namespace std;
bool equalpresent(int year)
{
    unordered_map<int,int> mp;
    int rem,x;
    x=year;
    while(x>0)
    {
        rem=x%10;
        mp[rem]++;
        x=x/10;
    }
    for(auto it: mp)
    {
        if(it.second>=2)
            return true;
    }
    return false;
}
int main()
{
    int year;
    cin>>year;
    if(!equalpresent(year))
    {
        year=year+1;
    }
    while(equalpresent(year))
    {
        year=year+1;
    }
    cout<<year<<endl;
    return 0;
}