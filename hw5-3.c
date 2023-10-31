#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   scanf("%d%d",&a,&b);

   if(a<=60)
   {
     int c;
     c=a*b;
     printf("%d\n",c);
   }
   if(a>60&&a<=120)
   {
    int d;
    d=a-60;
    double e,f;
    e=(double)d*b*1.33;
    f=(double)e+(60*b);
    printf("%.1f",f);
   }
   if(a>120)
   {
    int g;
    g=a-120;
    double h,i;
    h=(double)g*b*1.66;
    i=(double)h+60*b*1.33+60*b;
    printf("%.1f\n",i);
   }
}

