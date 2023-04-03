#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mini=INT_MAX;
    ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    
    ll minc=0,maxc=0;
    
    for(ll i=0;i<n;i++)
    {
        if(mini==arr[i]) 
            minc++;
        if(maxi==arr[i])
        {   
            // cout<<arr[i]<<endl; 
            maxc++;
        }
    }
    ll diff=maxi-mini;
    ll prs=maxc*minc;
    if(maxi==mini)
    {
       prs=n*(n-1)/2;
    }
    // cout<<maxc<<" "<<minc<<endl;
    cout<<diff<<" "<<prs<<endl;
    return 0;
}