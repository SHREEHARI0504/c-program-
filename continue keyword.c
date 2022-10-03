#include<stdio.h>

void main()
{

   int a=0;
   while(a<10)
   {
   	a=a+1;
   	if (a>3&&a<9)
   	  continue;
   	printf("%d",a);
   }
}
