#include<stdio.h>
struct Store {
    char iname[50];
    int totalRevenue;
    int totalExpenses;
};

int main()
{
    struct Store store; 
    int net_profitloss;
    printf("Enter the name of general store: ");
    scanf("%s",store.iname);
    printf("Enter the total revenue: ");
    scanf("%d",&store.totalRevenue);
    printf("Enter the totalExpenses: ");
    scanf("%d",&store.totalExpenses);
    net_profitloss = store.totalRevenue - store.totalExpenses;
    printf("\nGeneral Store Details:\n");
    printf("Name:%s\n",store.iname);
    printf("Total Revenue:%d\n",store.totalRevenue);
    printf("Total Expenses:%d\n",store.totalExpenses);
    if(net_profitloss > 0)
    {
        printf("Net Profit: %d\n",net_profitloss);
    } else if(net_profitloss > 0)
    {
        printf("Net Loss: %d\n",net_profitloss);
    }else 
    {
        printf("No Porfit or Loss\n");
    }
    return 0;
}