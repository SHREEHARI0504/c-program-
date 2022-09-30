#include <stdio.h>

void main()
{ 
    int i,n,dummy;
    printf("Enter the value n\n");
    scanf("%d",&n);
    dummy=1;
    for(i=2;i<n;i=i+1)
    {  
       if(n%i==0)
       {
           dummy=0;
           break;
       }
    }
    if (dummy==1)
       printf("Prime number");
    else
       printf(" Not a Prime number");
}

