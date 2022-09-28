#include <stdio.h>

void main()
{ 
    int rev,temp,num;
    rev=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(temp==rev)
      printf("No is Palindrome");
    else
       printf("No is not a Palindrome");
}
