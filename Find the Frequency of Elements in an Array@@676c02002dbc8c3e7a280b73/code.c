#include <stdio.h>

// Define a struct to keep track of counts
struct count {
    int count;
};

int main() {
    int n, digit;
    scanf("%d %d", &n, &digit);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    struct count counter[n];

    for (int i = 0; i < n; i++) {
        counter[i].count = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                counter[i].count++;
            }
        }
        printf("%d %d\n", arr[i] , counter[i].count);
    }

    

    return 0;
}
