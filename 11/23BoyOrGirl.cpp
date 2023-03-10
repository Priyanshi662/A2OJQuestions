#include <string>
#include <set>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    set<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i])==st.end())
        {
            st.insert(s[i]);
            count++;
        }
    }
    // cout<<count<<endl;
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}