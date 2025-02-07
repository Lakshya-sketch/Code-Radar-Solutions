#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) { 
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]); 
                return 0; 
            }
        }
    }
    printf("-1\n");

    return 0;
}
