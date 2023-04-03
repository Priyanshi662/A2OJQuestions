#include <iostream>
using namespace std;

int main()
{
    int t,sx,sy,ex,ey;
    cin>>t;
    cin>>sx>>sy;
    cin>>ex>>ey;
    int dx=ex-sx;
    int dy=ey-sy;
    if(dx==0 && dy==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int xl=0,yu=0;
    int xr=0,yd=0;
    int i;
    for(i=0;i<t;i++)
    {
        char ch;
        cin>>ch;
        if(ch=='N')
        {
           yu++;
        }
        if(ch=='S')
        {
            yd--;
        }
        if(ch=='W')
        {
            xl--;
        }
        if(ch=='E')
        {
            xr++;
        }
        if((xl<=dx) && (xr>=dx) && (yd<=dy) && (yu>=dy))
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
        cout<<"-1"<<endl;
    return 0;
}