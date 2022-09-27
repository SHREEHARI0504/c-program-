#include <stdio.h>

void main()
{ 
    int pre=1,curr=1,nxt=2,i,n;
    printf("Enter the number of digit:");
    scanf("%d  ",&n);
    printf("\n%d %d  ",pre,curr);
    i = 1;
    
    while(i<=n)
    {
      nxt=pre+curr;
      printf("%d  ",nxt);
      pre=curr;
      curr=nxt;
      
      i=i+1;
    }
}

