#include<stdio.h>
int main() {
    int num,rev=0,original,rem,sum=0,i,c=0;
    printf("Enter an interger:");
    scanf("%d",&num);
    original = num;
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        sum += rem;
        num/= 10;
    }
    if(original == rev) {
        printf("The number is a palindrome.\n");
        printf("The sum of the digits in the number is :%d\n",sum);
    } else{
        if(original % 2 ==0) {
            printf("The number is even .\n");
        } else {
            printf("The number is odd.\n");
        }
    }
    for(i=2;i<=original/2;++i){
        if (original % i == 0){
            c=1;
            break;
        }
    }
    if(original == 1){
        printf("1 is neither prime nor composite.\n");
    } else {
        if(c == 0) {
            printf("The number is a prime .\n");
        }else {
            printf("The number is not a prime .\n");
        }
    }
    return 0;
}