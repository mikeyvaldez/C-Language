


#include <stdio.h>
#include <stdlib.h>


int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Wednesday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        default:
            printf("Whatever.\n");
            break;
    }

    return 0;
}