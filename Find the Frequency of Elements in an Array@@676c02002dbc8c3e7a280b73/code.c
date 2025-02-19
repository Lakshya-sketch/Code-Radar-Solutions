#include <stdio.h>

#define MAX 100001 // Assuming values in the array do not exceed this

int main() {
    int n, digit;
    scanf("%d %d", &n , &digit); 
    
    int arr[n];
    int freq[MAX] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int printed[MAX] = {0};
    for (int i = 0; i < n; i++) {
        if (!printed[arr[i]]) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            printed[arr[i]] = 1; 
        }
    }

    return 0;
}
