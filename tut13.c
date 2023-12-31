#include<stdio.h>
void deleteDuplicate(int arr[],int*n){
    int i,j,k;
    for(i=0;i<*n;i++){
        for(j=i+1;j<*n;j++){
            if(arr[j] == arr[i]){
                for(k=j;k<*n;k++){
                    arr[k] = arr[k+1];
                }
                (*n)--;
            }else {
                j++;
            }
        }
    }
}
int main(){
    int n,i;
    printf("Enter the number of elements  in the vector:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    deleteDuplicate(arr,&n);
    printf("Vector after deleting duplicates:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}