#include <stdio.h>

int main()
{ 
     int a,b,c,d,max;
    
   
    printf("Enter the three numbers\n");
   
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
     
    max=(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d)?c:d;
        printf("%d",max);
    
    
    return 0;
    
   
}

