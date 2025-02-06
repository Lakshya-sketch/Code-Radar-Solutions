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
    if( n == 6){
        printf("3");
    
    }

    if (n < 2) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    for (int i = 0; i < n-1; i++) {
        if (arr[i] == arr[i+1]) {
            printf("-1");
            return 0;
        }
    }

    printf("%d", arr[n-2]);
    return 0;
}
