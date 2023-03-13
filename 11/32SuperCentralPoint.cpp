#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    int maxx=INT_MIN,maxy=INT_MIN,minx=INT_MAX,miny=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x][y]=true;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }
    cout<<count<<endl;
    return 0;
}