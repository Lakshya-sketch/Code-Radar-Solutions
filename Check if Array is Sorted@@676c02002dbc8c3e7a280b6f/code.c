#include <stdio.h>

int main() {
    int a, n;

    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Invalid array size\n");
        return 1;
    }

    int arr[a];

    // Taking array elements as input
    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < a - 1; i++) { 
        if (arr[i] > arr[i + 1]) {
            print("Not Sorted");
            break;
        }
        else{
            printf("Sorted")
        }
    }
    return 0;
}
