#include <stdio.h>

int main() {
    int a, n;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < a - 1; i++) { 
        if (arr[i] > arr[i + 1]) {
            printf("Not Sorted");
            break;
        }
        else{
            printf("Sorted");
        }
    }
    return 0;
}
