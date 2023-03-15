#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int count[3][3];
    int x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x;
            arr[i][j]=x;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            count[i][j]=arr[i][j];
            if(i>0)
            {
                count[i][j]+=arr[i-1][j];
            }
            if(j>0)
            {
                count[i][j]+=arr[i][j-1];
            }
            if(i<2)
            {
                count[i][j]+=arr[i+1][j];
            }
            if(j<2)
            {
                count[i][j]+=arr[i][j+1];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(count[i][j]%2==0)
                count[i][j]=1;
            else
                count[i][j]=0;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<count[i][j];
        }
        cout<<endl;
    }
}