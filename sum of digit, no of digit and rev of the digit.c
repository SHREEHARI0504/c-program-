#include <stdio.h>

void main()
{ 
    int rev,sd,nd,num;
    rev=sd=nd=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        rev=rev*10+num%10;
        sd=sd+num%10;
        nd=nd+1;
        num=num/10;
    }
    printf("Reverse of the number %d\n",rev);
    printf("Sum of the number %d\n",sd);
    printf("number of the digit %d\n",nd);
    
}

