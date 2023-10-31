#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   scanf("%d",&a);
   if(a<=800)
   {
       double b;
       b=(double) a*0.9;
       printf("%.1f\n",b);
   }
   if(a>800&&a<1500)
   {
       double c;
       c=(double)a*0.9*0.9;
       printf("%.1f\n",c);
   }
   if(a>=1500)
   {
       double d;
       d=(double)a*0.9*0.79;
       printf("%.1f\n",d);
   }
}
