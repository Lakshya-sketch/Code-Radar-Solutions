#include <stdio.h>
#include <stdlib.h>

int digit_sum(int number) {
    number = abs(number);
    int sum = 0;
    while (number > 0) { 
        sum = sum + (number % 10);
        number = number / 10;
    }
    return sum;
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++) {
        int ans = digit_sum(arr[i]); 
        printf("%d ", ans);
    }

    return 0;
}
