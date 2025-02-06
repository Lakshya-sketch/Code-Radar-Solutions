#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int isSame = 1;
    for (int i = 1; i < a; i++) {
        if (arr[i] != arr[0]) {
            isSame = 0;
            break;
        }
    }
    if (isSame) {
        printf("-1\n");
        return 0;
    }
    if (a == 1) {
        printf("%d\n", arr[0]);
        return 0;
    }
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 0;
    }
    for (int i = 1; i < a - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    if (arr[a - 1] > arr[a - 2]) {
        printf("%d\n", arr[a - 1]);
        return 0;
    }

    printf("-1\n");

    return 0;
}
