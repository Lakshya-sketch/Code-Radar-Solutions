#include <stdio.h>

int main() {
    int n, digit, count = 0;
    scanf("%d %d", &n ,&digit);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        while (num > 0) {
            if (num % 10 == digit) {
                count++;
            }
            num /= 10; 
        }
    }
    printf("%d %d", digit, count);

    return 0;
}
