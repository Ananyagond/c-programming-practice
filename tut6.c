#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<2*i;j++)
        {
            printf("%d",j);
        }
        k=2*(i-1);
        for(j=1;j<=i-1;j++)
        {
            printf("%d",k--);
        }
        printf("\n");
    }
    return 0;
}