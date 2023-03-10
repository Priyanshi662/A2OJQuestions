#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int totalorange=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        totalorange+=x;
    }
    int total=n*100;
    double fraction=(double)totalorange/total;
    fraction*=100;
    printf("%.12f",fraction);
    return 0;
}