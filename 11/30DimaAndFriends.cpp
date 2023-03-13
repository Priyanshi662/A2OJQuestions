#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    int res=0;
    for(int i=1;i<=5;i++)
    {
        // checking for every possibilty for Dima
        if((sum+i)%(n+1)!=1)
        {
            // calculating the number of possibilities
            res+=1;
        }
    }
    cout<<res<<endl;
    return 0;
}