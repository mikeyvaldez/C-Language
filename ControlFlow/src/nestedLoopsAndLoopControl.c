



#include <stdio.h>
#include <stdlib.h>


int main()
{

    int count = 5;
    int sum;

    for (int i = 1; i <= count; ++i)
    {
        sum = 0;   // Initialize sum for the inner loop

        // Calculate sum of integers from 1 to i
        for (int j = 1; j <= i; ++j)
        {
            sum += j;
        }

        printf("\n%d\t%d\n", i, sum);    // Output sum of 1 to i
    }
    
    return 0;
}