#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i], rem, reversed = 0;
        
        int original = num; 
        
        while (num != 0) {
            rem = num % 10;  
            reversed = (reversed * 10) + rem;
            num /= 10;
        }

        if (reversed == original) { 
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
