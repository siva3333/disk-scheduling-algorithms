#include<stdio.h>
int main()
{
    int i,h,r;
    printf("enter the head pointer position");
    scanf("%d",&h);
    printf("enter the no.of requests");
    scanf("%d",&r);
    int re[r],av[r];
    for(i=0;i<r;i++)
    {
        printf("enter the request %d",i);
        scanf("%d",&re[i]);
    }
    av[0]=abs(re[0]-h);
    printf("header position at %d diff %d\n",re[0],av[0]);
    for(i=1;i<r;i++)
    {
        av[i]=abs(re[i-1]-re[i]);
        printf("header position at %d diff %d\n",re[i],av[i]);
    }
    float a=0;
    for(i=0;i<r;i++)
    {
        a=(float)(a+av[i]);
    }
    a=a/r;
    printf("average header movement is %f",a);
}
