#include <stdio.h>

int main()
{
   
   int a=5;
   int * p =&a;
   int **d = &p;
   int ***o = &d;
   ***o=9;
   printf("%d %d %d %d",a,*p,**d,***o);
 
}

