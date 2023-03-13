#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int totres=0;
    while(n--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        if(s[0]=='+' || s[sz-1]=='+')
        {
            totres+=1;
        }
        else if(s[0]=='-'||s[sz-1]=='-')
        {
            totres-=1;
        }
    }
    cout<<totres<<endl;
    return 0;
}