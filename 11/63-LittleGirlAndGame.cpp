#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int even=0;
    int odd=0;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        int count=it.second;
        if(count%2!=0)
            odd++;
        else
            even++;
    }
    if(odd==0)
        cout<<"First"<<endl;
    else if(odd==1)
        cout<<"First"<<endl;
    else
    {
        if(odd%2==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}