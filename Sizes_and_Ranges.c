#include <stdio.h>
#include <limits.h>

int main() {
    printf("----------Sizes and Ranges of Integer, Long Integer, Character, Short Integer, Unsigned Integer, Signed Integer--------\n");
    
    // INTEGER
    printf("Size of Integer is: %d bytes\n", sizeof(int));
    printf("Range of Integer is: %d to %d\n", INT_MIN, INT_MAX);

    // LONG INTEGER
    printf("Size of Long Integer is: %d bytes\n", sizeof(long int));
    printf("Range of Long Integer is: %ld to %ld\n", LONG_MIN, LONG_MAX);

    // CHARACTER
    printf("Size of Character is: %d byte\n", sizeof(char));
    printf("Range of Character is: %d to %d\n", CHAR_MIN, CHAR_MAX);

    // SHORT INTEGER
    printf("Size of Short Integer is: %d bytes\n", sizeof(short int));
    printf("Range of Short Integer is: %d to %d\n", SHRT_MIN, SHRT_MAX);

    // UNSIGNED INTEGER
    printf("Size of Unsigned Integer is: %d bytes\n", sizeof(unsigned int));
    printf("Range of Unsigned Integer is: 0 to %u\n", UINT_MAX);

    // SIGNED INTEGER
    printf("Size of Signed Integer is: %d bytes\n", sizeof(signed int));
    printf("Range of Signed Integer is: %d to %d\n", INT_MIN, INT_MAX);

    return 0;
}
