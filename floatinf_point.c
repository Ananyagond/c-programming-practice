#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ 
    float n;
    printf("Enter the number:");
    scanf("%d",&n);
    int x =floor(n);
    if(x == n)
    {
        printf("It is an integer");
    }
    else {
        printf("It is a float");
    }
    return 0;
}