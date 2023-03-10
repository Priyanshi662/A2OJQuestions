#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // number of tram stops - n
    int a,b;
    // a - number of trams exiting 
    // b - number of trams entering
    cin>>a>>b;
    int count=abs(b-a);
    int capacity=count;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        count-=a;
        count+=b;
        capacity=max(capacity,count);
    }
    cout<<capacity<<endl;
    return 0;
}