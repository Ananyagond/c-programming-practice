#include<stdio.h>
int main() 
{
    int i, n ;
    printf("Enter the number you want multipliction table of:");
    scanf("%d",&n);
    for(i=1; i<=10; i++) {
        printf("%d\n",n*i);
    }    
}