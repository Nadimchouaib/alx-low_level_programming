#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); // Seed the random number generator with the current time
    int n = rand();    // Generate a random number and store it in 'n'

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }

    printf("\n");

    return 0;
}
