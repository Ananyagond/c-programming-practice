#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,a[10][10];
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columbns: ");
    scanf("%d",&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("Enter data in[%d][%d]\n:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}