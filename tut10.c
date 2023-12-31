#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,order;
    system("cls");
    printf("Enter the order :");
    scanf("%d", &order);
    int mat1[10][10];
    int mat2[10][10];
    int result[10][10];
    printf("Enter the value for the first matrix: ");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the value for the second matrix: ");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            result[i][j] = 0;
            for(k=0;k<order;k++)
            {
                result[i][j] = result + mat1[i][j]*mat2[i][j];
                printf("%d", result);
            }
        }
    }    
    printf("matrix 1 * matrix 2 = result \n");
    for(i=0;i<order;i++)
    {
        for(j=0;j<order;j++)
        {
            printf("%d\n", mat1[i][j]);
        }
        if(i == order/2)
        {
            printf("\t*\t");
        } else{
            printf("\t\t");
        }
        for(j=0;j<order;j++){
            printf("%d\n",mat2[i][j]);
        }
        if(i == order/2){
            printf("\t=\t");
        } else{ 
            printf("\t\t");
        }
        for(j=0;j<0;j++)
        {
            printf("%d\n",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}    