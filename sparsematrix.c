#include<stdio.h>
int isSparse(int matrix[10][10],int rows,int cols) {
    int count = 0 , i , j ;
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            if(matrix[i][j] == 0)
            count++;
        }
    }
    printf("Number of zeros are %d", count);
    return 0;
}
int notsparse(int matrix[10][10],int rows,int cols)
{
    int sum = 0,i,j;
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            sum = sum + matrix[i][j];
        }
    }
    printf("sum is %d",sum);
    return 0;
}
int main()
{
    int rows,cols,i,j,z=0,c=0,matrix[10][10];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&rows,&cols);
    printf("Enter the elements:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",matrix[i][j]);
        }
    }
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<cols ; j++)
        {
            if(matrix[i][j] == 0)
            z++;
            else
            c++;
        }
    }
    if(z>c)
    {
        printf("SPARSE MATRIX");
        issparse(matrix,rows,cols);
        return 0;
    }
    else{
        printf("NOT A SPARSE MATRIX");
        notsparse(matrix,rows,cols);
        return 0;
    }
    return 0;
}