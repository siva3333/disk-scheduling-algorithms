#include<stdio.h>
int main()
{
    int i,h,r,j,in,r1,r2,c,d,min,max;
    int av[20];
    printf("enter the head pointer position");
    scanf("%d",&h);
    printf("enter the range of requests");
    scanf("%d%d",&r1,&r2);
    printf("enter the no.of requests");
    scanf("%d",&r);
    c=r;
    int re[r],f[r],m;
    for(i=0;i<r;i++)
    {
        printf("enter the request %d",i);
        scanf("%d",&re[i]);
    }
    min=-1;max=9999;
    for(i=0;i<r;i++)
    {
        f[i]=1;
        if(re[i]<min)
        {
            min=re[i];
        }
        if(re[i]>max)
        {
            max=re[i];
        }
    }
     m=9999;
        for(j=0;j<r;j++)
        {
            if((abs(h-re[j])<m && f[j]))
               {
                   m=abs(h-re[j]);
                   in=j;
               }
        }
        av[0]=abs(h-re[in]);
        if(re[in]>h)
        {
            d=1;
        }
        else{
            d=0;
        }
        h=re[in];f[in]=0;c--;
        printf("header position at %d diff %d\n",re[in],av[0]);
        i=1;
    while(c)
    {
       if(d)
       {
           m=r2;in=-1;
          for(j=0;j<r;j++)
          {
            if((re[j]>h&&re[j]<m&&f[j]))
               {
                   m=re[j];
                   in=j;
               }
          }
          if(in==-1)
          {
              d=0;
              av[i]=r2-h;
              printf("header position at %d diff %d\n",r2,av[i]);i++;
              continue;
          }
       }
       else
       {
            m=r1;in=-1;
           for(j=0;j<r;j++)
           {
               if((re[j]<h)&&(re[j]>m)&&f[j])
               {
                   m=re[j];
                   in=j;
               }
           }
           if(in==-1)
           {
               d=1;
               av[i]=h-r1;
               printf("header position at %d diff %d\n",r1,av[i]);i++;
               continue;
           }
       }
       av[i]=abs(h-re[in]);
        h=re[in];f[in]=0;c--;
        printf("header position at %d diff %d\n",re[in],av[i]);
        i++;
    }
    float a=0;
    for(j=0;j<i;j++)
    {
         a=(float)(a+av[j]);
    }
    a/=r;
    printf("average header movement is %f",a);
}

