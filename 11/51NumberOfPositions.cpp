#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    // 1 2 3 4 5 6 7 8
    // a=3, b= 2
    // calculate positions you cannot take:
    // a+1=4 -> 1,2,3,4
    // n-b=6 -> 1,2,3,4,5
    // 8-5
    // positions - 6 7 8 
    cout<<(n-max(a+1,n-b))+1<<endl;
    return 0;
}