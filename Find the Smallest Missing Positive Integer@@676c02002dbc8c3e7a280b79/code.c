#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a <= 0) {
        printf("Invalid array size.");
        return 1;
    }

    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum1 = 0;  
    int sum2 = 0;  
    int Big = arr[0];
    int Small = arr[0];

    for (int i = 1; i < a; i++) {
        if (arr[i] > Big) {
            Big = arr[i];
        }
        if (arr[i] < Small) {
            Small = arr[i];
        }
    }
    for (int i = 0; i < a; i++){
        sum1 += arr[i];
    }
    sum2 = (Big * (Big + 1) / 2) - ((Small - 1) * Small / 2);

    printf("%d", (sum2 - sum1));
    
    return 0;
}
