#include <stdio.h>
#include <stdlib.h>

int main()
{
   int h,m;
   scanf("%d%d",&h,&m);
   double a,b,c,d,e,f,g,i;
   a=(double)h*30+m*0.5;
   b=(double)m*6;
   if(a>b)
   {
    c=(double)a-b;
    if(c>180)
    {
     d=(double)360-c;
     printf("%.3f\n",d);
    }
    else
   {
     printf("%.3f\n",c);
   }
   }
   if(a<b)
   {
    e=(double)b-a;
    if(e>180)
    {
      f=(double)360-e;
    }
    else
    {
      printf("%.3f\n",e);
    }

   }
}

