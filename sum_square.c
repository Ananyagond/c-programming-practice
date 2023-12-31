#include<stdio.h>
#include<conio.h>
int main()
{
    int i, sum = 0, sq ,sq_sum=0;
    for(i=0;i<=20;i++)
    {
        sum = sum + i;
        sq_sum = sq_sum + sq;
    }
    printf("Sum of numbers is %d\n",sum);
    printf("Sum of square of numbers is %d",sq_sum);
    return 0;
}