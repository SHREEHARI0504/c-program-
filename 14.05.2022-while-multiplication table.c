#include <stdio.h>

void main()
{ 
    int a,b;
    printf("Enter the number");
    scanf("%d\n",&b);
    a = 1;
    
    while(b<=10)
    {
      printf("%d*%d=%d\n",a,b,a*b);
      b=b+1;
    }
}

