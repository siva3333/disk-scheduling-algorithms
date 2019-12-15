#include<stdio.h>
int main()
{
    int i,h,r,j,in;
    printf("enter the head pointer position");
    scanf("%d",&h);
    printf("enter the no.of requests");
    scanf("%d",&r);
    int re[r],av[r],f[r],m;
    for(i=0;i<r;i++)
    {
        printf("enter the request %d",i);
        scanf("%d",&re[i]);
    }
    for(i=0;i<r;i++)
    {
        f[i]=1;
    }
    for(i=0;i<r;i++)
    {
        m=9999;
        for(j=0;j<r;j++)
        {
            if((abs(h-re[j])<m && f[j]))
               {
                   m=abs(h-re[j]);
                   in=j;
               }
        }
        av[i]=abs(h-re[in]);
        h=re[in];f[in]=0;
        printf("header position at %d diff %d\n",re[in],av[i]);

    }
    av[0]=abs(re[0]-h);
    float a=0;
    for(i=0;i<r;i++)
    {
        a=(float)(a+av[i]);
    }
    a/=r;
    printf("average header movement is %f",a);
}

