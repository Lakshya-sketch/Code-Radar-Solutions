#include <stdio.h>

int main() {
    int a, b;
    
    // Read array size
    scanf("%d", &a);
    
    // Declare array after reading size
    int arr[a];

    // Read array elements
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number to search
    scanf("%d", &b);

    // Linear search for `b` in `arr`
    int found = 0;  // Flag to track if element is found
    for (int i = 0; i < a; i++) {
        if (arr[i] == b) {
            printf("%d", i);  // Print index where found
            found = 1;
            break;
        }
    }

    // If element not found, print -1
    if (!found) {
        printf("-1");
    }

    return 0;
}
