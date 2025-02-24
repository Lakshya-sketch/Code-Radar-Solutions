#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp_arr[n];
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp_arr[index++] = arr[i];
        }
    }

    while (index < n) {
        temp_arr[index++] = 0;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp_arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
