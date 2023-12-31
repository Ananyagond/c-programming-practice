#include<stdio.h>
#include<conio.h>
int main()
{
    int i , j ,n , k ,m;
    printf("Enter the number of rows:");
    scanf("%d",n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=i ; j<=n ; j++)
        printf(" ");
    }
    for(k=1  ; k<=2*i-1 ; k++)
    {
        for(m=2 ; m<=k ; m++)
        printf("%d",m);
    }
    printf("\n");
    return 0;
}