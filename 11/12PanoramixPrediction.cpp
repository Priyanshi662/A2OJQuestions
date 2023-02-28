#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<bool> seive(m+1,true);
    seive[0]=seive[1]=false;
    for(int i=2;i*i<=m;i++)
    {   
        if(seive[i]==true)
        {
            for(int j=i*i;j<=m;j+=i)
            {   
                seive[j]=false;
            }
        }
    }
    if(seive[n]==true)
    {
        int i=n+1;
        while(seive[i]==false && i<m)
            i++;
        if(i==m && seive[i]==true)
        {
               cout<<"YES";
               return 0;
        }
    }
    cout<<"NO";
    return 0;
}