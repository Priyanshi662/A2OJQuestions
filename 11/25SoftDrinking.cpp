#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l;
    cin>>c>>d>>p>>nl>>np;
    int drink=k*l;
    drink=drink/nl;
    int lime=c*d;
    int salt=p/np;
    // cout<<drink<<endl;
    // cout<<lime<<endl;
    // cout<<salt<<endl;
    int toasts=min(lime,min(drink,salt))/n;
    cout<<toasts<<endl;
    return 0;
}