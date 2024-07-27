


// Remember boolean 1 = true and 0 = false.

#include <stdio.h>

int main() {
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    // result = a && b;   // both conditions must be true with the AND operator
    // result = a || b;   // one condition only has to be true with the OR operator
    result = !a;   // This is known as the inverse operator


    printf("%d\n", result);

    return 0;
}