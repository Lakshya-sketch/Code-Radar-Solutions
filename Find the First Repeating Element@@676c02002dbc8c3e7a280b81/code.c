#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int Largest = INT_MIN, product;

    for (int i = 0; i < a - 1; i++) {
        product = arr[i] * arr[i + 1]; 
        if (product > Largest) {
            Largest = product;
        }
    }

    printf("%d\n", Largest);
    return 0;
}
