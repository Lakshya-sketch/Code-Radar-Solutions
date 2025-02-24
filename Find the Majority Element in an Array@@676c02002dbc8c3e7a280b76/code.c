#include <stdio.h>
#include <stdbool.h>

// Define a struct to store the element and its frequency
struct Element {
    int value;
    int frequency;
};

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    struct Element freq[n]; 
    bool visited[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = false; 
    }

    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) { 
            freq[uniqueCount].value = arr[i];
            freq[uniqueCount].frequency = 1; 

            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    freq[uniqueCount].frequency++;
                    visited[j] = true; 
                }
            }
            uniqueCount++;
        }
    }

    int max = 0;
    for (int i = 0; i < uniqueCount; i++) {
        if (freq[i].frequency > max) {
            max = freq[i].frequency;       
        }
    }

    for (int i = 0; i < uniqueCount; i++) {
        for (int j = i + 1; j < uniqueCount; j++) {
            if (freq[i].frequency == freq[j].frequency) {
                printf("-1\n");
                return 0;
            }
        }
    }

    for (int i = 0; i < uniqueCount; i++) {
        printf("%d\n",freq[i].frequency);
    }

    return 0;
}
