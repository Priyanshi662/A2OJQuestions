#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,row,col;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                row=i;
                col=j;
                break;
            }
        }
    }
    int sol=abs(row-2)+abs(col-2);
    cout<<sol;
    return 0;
}