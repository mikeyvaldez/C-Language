



#include <stdio.h>
#include <stdlib.h>


int main()
{

    int count = 5;
    int sum;
    int j;

    for (int i = 1; i <= count; ++i)
    {
        sum = 1;     // Initialize sum for the inner loop
        j = 1;       // Initialize integer to be added
        printf("\n1");

        // Calculate sum of integers from 1 to i
        while(j < i)
        {
            sum += ++j;
            printf(" + %d", j);     // Output +j - on the same line            
        }
        printf(" = %d", sum);     // Output = sum
    }
    printf("\n");

    return 0;
}