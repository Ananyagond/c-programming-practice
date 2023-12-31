#include<stdio.h>
#include<conio.h>
int main()
{
    int i , n ;
    float x , sum=1 , t=1;
    printf("Enter the value :");
    scanf("%f",&x);
    printf("Enter the value :");
    scanf("%d",&n);
    x = x*3.14/100;
    for(i=1;i<=n;i++)
    {
        t = t*(-1)*x*x/(2*i*(2*i-1));
        sum = sum + t;
    }
    printf("Value of cos(%f):%f,x,sum");
    return 0;
}