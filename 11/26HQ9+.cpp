#include <iostream>
using namespace std;

int main()
{
    string in;
    cin>>in;
    for(int i=0;i<in.size();i++)
    {
        if(in[i]=='H'||in[i]=='Q'||in[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}