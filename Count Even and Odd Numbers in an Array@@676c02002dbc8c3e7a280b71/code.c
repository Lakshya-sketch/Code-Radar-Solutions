#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int e_count = 0, o_count = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {
            e_count++;
        } else {
            o_count++;
        }
    }

    printf("%d %d\n", e_count, o_count);
    return 0;
}
