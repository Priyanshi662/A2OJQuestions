#include <iostream>
#include <math.h>
using namespace std;
const int N=pow(10,5)+3;
int main()
{
    int n;
    cin>>n;
    int pos[N];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pos[x]=i+1;
    }
    int m;
    cin>>m;
    long long int totleft=0;
    long long int totright=0;
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        int index=pos[b];
        totleft+=index;
        totright+=n-index+1;
    }
     printf("%I64d %I64d\n", totleft, totright);
    return 0;
}