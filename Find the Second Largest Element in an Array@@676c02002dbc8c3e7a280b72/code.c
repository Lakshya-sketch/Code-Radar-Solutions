#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int unique[n], uniqueCount = 0;
    unique[uniqueCount++] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            unique[uniqueCount++] = arr[i];
        }
    }

    if (uniqueCount < 2) {
        printf("-1");  
    } else {
        printf("%d", unique[uniqueCount - 2]); 
    }

    return 0;
}
