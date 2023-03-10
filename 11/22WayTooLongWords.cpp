#include<string>
#include<iostream>
using namespace std;

string longword(string st){
    int n=st.size();
    string res;
    if(n<=10)
    return st;
    int count=0;
    string str=st.substr(1,n);
    count=str.size()-1;
    str=st[0]+to_string(count)+st[n-1];
    return str;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
	cout<<longword(n)<<endl;
    }
	return 0;
}