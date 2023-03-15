#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a1[i]=x;
    }
    int m;
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        a2[i]=x;
    }
    int maxgear=0;
    for(int i=0;i<n;i++)
    for(int j=m-1;j>=0;j--)
      {      int x=a2[j]/a1[i];
            if((a2[j]%a1[i]==0) && x>=maxgear)
            {
                maxgear=x;
            }
    }
    int count=0;
    for(int i=0;i<n;i++)
    for(int j=m-1;j>=0;j--)
      {      int x=a2[j]/a1[i];
            if((a2[j]%a1[i]==0) && x==maxgear)
            {
                count++;
            }
    }
    cout<<count<<endl;
    return 0;
}