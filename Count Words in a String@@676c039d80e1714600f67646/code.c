#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Use fgets to read spaces in input

    int count = 0;
    for (int i = 0; i < strlen(str); i++) { // Iterate through entire string
        if (str[i] == ' ') { // Compare with space character
            count++;
        }
    }

    printf("%d\n", count); // Print number of spaces
    return 0;
}
