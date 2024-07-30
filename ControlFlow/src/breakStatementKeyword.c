



#include <stdio.h>
#include <stdlib.h>


int main()
{

    int p = 5;
    int q;

    while (p > 0)
    {
        printf("%d\n", p);
        scanf("%d", &q);
        while (q > 0)
        {
            printf("%d\n", p*q);
            if (q > 100)
            {
                break;     // break from inner loop
            }
            scanf("%d", &q);
        }

        if (q > 100)
        {
            break;     // break from outer loop
        }
        scanf("%d", &p);
    }

    return 0;
}