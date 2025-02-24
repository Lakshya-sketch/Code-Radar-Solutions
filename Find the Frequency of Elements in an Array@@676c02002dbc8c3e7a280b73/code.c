#include <stdio.h>
#include <stdbool.h>  
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
    bool visited[n]; 

    for (int i = 0; i < n; i++) {
        counter[i].count = 0;
        visited[i] = false;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) { 
            counter[i].count = 1; 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    counter[i].count++;
                    visited[j] = true;  
                }
            }
            printf("%d %d\n", arr[i], counter[i].count);
        }
    }

    return 0;
}
