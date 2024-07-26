#include <stdio.h>

// The following program simply takes in user input
// it takes in an integer then a string and displays the output

int main() {
    char str[100];
    int i;

    printf("Enter a value: \n");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d:::::%s\n", i, str);

    return 0;
}