#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<int> p1;
    priority_queue<int,vector<int>,greater<int>> p2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        p1.push(x);
        p2.push(x);
    }
    int maxi=0;
    int mini=0;
    for(int i=0;i<n;i++)
    {
        int x=p2.top();
        p2.pop();
        mini+=x;
        if(x-1>0)
            p2.push(x-1);
    }
    for(int i=0;i<n;i++)
    {
        int x=p1.top();
        p1.pop();
        maxi+=x;
        p1.push(x-1);
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}