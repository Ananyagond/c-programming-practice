#include<stdio.h>
#include<conio.h.>
int main()
{
    int year;
    printf("Enter the current year:");
    scanf("%d",&year);
    if((year%4==0) && (year%400==0)|| (year%100==0))
    {
        printf("It is a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
    if(year%4==1)
    {
        year = year + 3;
        printf("Next leap year is % d\n",year);
        return 0;
    }
    if(year%4==2)
    {
        year = year + 2;
        printf("This is the next leap year%d\n",year);
        return 0;
    }
    if(year%4==3)
    {
        year = year + 1;
        printf("This is  the next leap year %d\n",year); 
        return 0;
    }
    return 0;
}