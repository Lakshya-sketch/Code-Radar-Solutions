#include <stdio.h>

int main() {
    int a, count = 0, b;
    scanf("%d", &a); 
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &b); 
    for (int i = 0; i < a; i++) {
        if (arr[i] == b) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
