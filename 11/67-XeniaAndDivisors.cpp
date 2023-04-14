#include <stdio.h>
#include <string.h>
int arr[100005];
int hash[8];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<=n;i++)
        hash[arr[i]]++;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==1)
        {
            if(hash[2]>0 && hash[4]>0)
            {
                hash[1]-=1;
                hash[2]-=1;
                hash[4]-=1;
            }
            else if(hash[3]>0 && hash[6]>0)
            {
                hash[1]-=1;
                hash[3]-=1;
                hash[6]-=1;
            }
            else if(hash[2]>0 && hash[6]>0)
            {
                hash[1]-=1;
                hash[2]-=1;
                hash[6]-=1;
            }
        }
    }
    int f=1;
    for(i=0;i<=7;i++)
    {
        if(hash[i]!=0)
        {
            f=0;
            break;
        }
    }   
    if(f==0)
        printf("-1\n");
    else
    {
        for(i=0;i<=7;i++)
            hash[i]=0;
        for(i=1;i<=n;i++)
            hash[arr[i]]++;
        for(i=1;i<=n;i++)
        {
            if(arr[i]==1)
            {
                if(hash[2]>0 && hash[4]>0)
                {
                    hash[2]-=1;
                    hash[4]-=1;
                    printf("1 2 4\n");
                }
                else if(hash[3]>0 && hash[6]>0)
                {
                    hash[3]-=1;
                    hash[6]-=1;
                    printf("1 3 6\n");
                }
                else if(hash[2]>0 && hash[6]>0)
                {
                    hash[2]-=1;
                    hash[6]-=1;
                    printf("1 2 6\n");
                }
            }
        }
    }
    return 0;
}