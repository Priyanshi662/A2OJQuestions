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
        int carry=0;
        if(s[0]=='+')
        {
            totres+=1+carry;
        }
        else if(s[0]=='-')
        {
            totres-=1+carry;
        }
        else if(s[sz-1]=='+')
        {
            carry=1;
        }
        else if(s[sz-1]=='-')
        {
            carry=-1;
        }
    }
    cout<<totres<<endl;
    return 0;
}