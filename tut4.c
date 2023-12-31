#include<stdio.h>
#include<conio.h>
int main()
{
    int ch, r1,h1,vol1,s,vol2,h2,r2,vol3;
    printf("Enter your choice:\n0 for cylinder\n1 for cube\n2 for cone");
    scanf("%d",&ch);
    switch(ch)
    {
        case 0:
        printf("Enter the radius and height");
        scanf("%d%d",&h1,&r1);
        vol1 = 3.14*r1*r1*h1;
        printf("Volume is %d",vol1);
        return 0;
        break;
        case 1:
        printf("Enter the side");
        scanf("%d",&s);
        vol2 = s*s*s;
        printf("Volume is %d",vol2);
        return 0;
        break;
        case 2:
        printf("Enter the radius and height");
        scanf("%d%d",&h2,&r2);
        vol3 = (3.14*r2*r2*h2)/3;
        printf("Volume is %d",vol3);
        return 0;
        break;
    }
    return 0;
}        