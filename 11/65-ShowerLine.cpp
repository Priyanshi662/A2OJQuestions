#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int g[6][6];
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            cin>>g[i][j];
        }
    }
    int pos[6]={1,2,3,4,5};
    int ans=-1;
    do
    {
        int temp;
        // 01234
        temp =g[pos[0]][pos[1]]+g[pos[1]][pos[0]];
        temp+=g[pos[1]][pos[2]]+g[pos[2]][pos[1]];
        temp+=g[pos[2]][pos[3]]+g[pos[3]][pos[2]];
        temp+=g[pos[3]][pos[4]]+g[pos[4]][pos[3]];
        temp+=g[pos[2]][pos[3]]+g[pos[3]][pos[2]];
        temp+=g[pos[3]][pos[4]]+g[pos[4]][pos[3]];
        ans=max(temp,ans);
    }
    while(next_permutation(pos,pos+5));
    cout<<ans<<endl;
    return 0;
}