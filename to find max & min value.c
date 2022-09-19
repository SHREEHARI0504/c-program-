#include <stdio.h> 
int max(int a, int b, int c){ 
    int num; 
    if (a>b && b>c) 
        return num=a; 
    else if (b>a && b>c) 
        return num=b; 
    else 
        return num=c; 
} 
int min(int a, int b, int c){ 
    int num; 
    if (a<b && b<c) 
        return num=a; 
    else if (b<a && b<c) 
        return num=b; 
    else 
        return num=c; 
} 
int main() 
{ 
    int a,b,c,maximum,minimum; 
    printf("Enter Numbers:\n"); 
    scanf("%d %d %d",&a,&b,&c); 
    maximum= max(a,b,c); 
    minimum=min(a,b,c); 
    printf("Max No.=%d\nMin No.=%d\n",maximum,minimum); 

return 0; 
}