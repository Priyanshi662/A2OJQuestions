#include <iostream>
using namespace std;
  
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]!='-')
            {
                if((i+j)&1)
                    s[j]='W';
                else
                    s[j]='B';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}