#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    int flag = 0;  
    for (int i = 0; i < a; i++) {
        if (arr[i] == b) {
            printf("%d", i);
            found = 1;
            break;
        }
    }
    if (!flag) {
        printf("-1");
    }

    return 0;
}
