#include <iostream>
#include <vector>
using namespace std;

int n,i,x,l,tot,del;
int mymap[100005][3];
vector<pair<int,int>> res;
int main()
{
    scanf("%d",&n);
    del=0;
    tot=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(mymap[x][0]==0)
        {
            mymap[x][0]=1;
            mymap[x][1]=i;
        }
        else if(mymap[x][0]==1)
        {
            mymap[x][0]=2;
            mymap[x][2]=i;
        }
        else
        {
            if(mymap[x][1]!=-1 && mymap[x][0]==2)
            {
                if(i-mymap[x][2]==mymap[x][2]-mymap[x][1])
                {
                    mymap[x][0]=2;
                    mymap[x][1]=mymap[x][2];
                    mymap[x][2]=i;
                }
                else
                {
                    mymap[x][1]=-1;
                }
            }
        }
    }
    for(i=1;i<100005;i++)
    {
        if(mymap[i][0]>0 && mymap[i][1]!=-1)
        {
            if(mymap[i][0]==1)
                res.push_back(make_pair(i,0));
            else
                res.push_back(make_pair(i,mymap[i][2]-mymap[i][1]));
        }
    }
    int le=res.size();
    printf("%d\n",le);
    for(i=0;i<le;i++)
    {
        printf("%d %d\n",res[i].first,res[i].second);
    }
    return 0;
}