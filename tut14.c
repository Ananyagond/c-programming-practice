#include<stdio.h>
int main() {
    int m,n,mat[10][10];
    printf("enter the number of row and column:");
    scanf("%d%d",&m,&n);
    int i,j,k,minrow,col;
    for(i=0;i<m;i++) {
        minrow = mat[i][0];
        col = 0;
        for(j=1;j<n;j++) {
            if(minrow > mat[i][j]) {
                minrow = mat[i][j];
                col = j;
            }
        }
        int k;
        for(k=0;k<m;k++) {
            if(minrow<mat[k][col])
            break;
        }
        if(k == m) {
            printf("Saddle point is present at (%d,%d) and it value is %d\n,i,col ,minrow");
            return 0;
        }
    }
    printf("No Saddle point found in the matrix\n");
    return 0;
}