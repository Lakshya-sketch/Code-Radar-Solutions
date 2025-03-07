#include <stdio.h>
#include <stdlib.h>

void leftRotate(int arr[], int n, int b) {
    b = b % n;
    if (b == 0) return;

    int *temp = (int *)malloc(b * sizeof(int)); 

    for (int i = 0; i < b; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - b; i++) {
        arr[i] = arr[i + b];
    }

    for (int i = 0; i < b; i++) {
        arr[n - b + i] = temp[i];
    }

    free(temp); 
}

int main() {
    int n, b;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);

    leftRotate(arr, n, b);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}