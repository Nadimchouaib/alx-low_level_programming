#include <stdio.h>

/**
 *main -  This function prints the size of various types on the computer it is compiled and run on
 *Return: The main function returns 0
*/
int main(void) 
{
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of long: %lu byte(s)\n", sizeof(long int));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

    return (0);
}
