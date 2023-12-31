#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    
    // taking input for number of rows
    scanf("%d", &rows);
    
    // Outer loop to handle number of rows
    for (i = 0; i < rows; i++)
    {
        // loop to handle space
        for (space = 1; space <= rows - i; space++)
            
            // Printing Space
            printf("  ");
        
        // Inner loop to handle number of columns
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        
        // Ending line after each row
        printf("\n");
    }
    return 0;
}

