#include<stdio.h>
#include<conio.h>
int main()
{
    int i , j,n;
    printf("Input number of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 1;
}