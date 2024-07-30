




#include <stdio.h>
#include <stdlib.h>


int main()
{

    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day)
    {
        if (day == Wednesday)
        {
            continue;   // the continue statement
        }

        printf("It's not Wednesday!\n");     // prints for everday 
        /*Do something useful with the day!*/
    }
    // printf("It's not Wednesday!\n");   // prints single

    return 0;
}