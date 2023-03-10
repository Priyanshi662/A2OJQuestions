#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()<=2)
    {
        cout<<s;
        return 0;
    }
    // even indices have numbers
    int n=s.size();
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high)
    {
        if(s[mid]=='1')
        {
            swap(s[mid],s[low]);
            low+=2;
            mid+=2;
        }
        else if(s[mid]=='3')
        {
            swap(s[mid],s[high]);
            high-=2;
        }
        else
        {
            mid+=2;
        }
    }
    cout<<s<<endl;
    return 0;
}