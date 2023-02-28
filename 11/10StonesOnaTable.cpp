#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string in;
    cin>>in;
    int i=0;
    int j=1;
    int count=0;
    while(j<n)
    {
        if(in[j]==in[i])
        {
            count++;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
    }
    cout<<count<<endl;
    return 0;
}