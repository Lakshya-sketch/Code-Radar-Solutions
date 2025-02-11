#include <stdio.h>

struct Days {
    char name[10];
    int temp;
};

float Avg_temp(struct Days day[], int n) {
   float sum = 0;
   for (int i = 0; i < n; i++) {
       sum = sum + day[i].temp;
   }
   n = float(n);
   return sum / n; 
}

int main() {
    int n;
    scanf("%d", &n);
    struct Days day[n];

    for (int i = 0; i < n; i++) {
        scanf("%9s %d", day[i].name, &day[i].temp);
    }

    printf("Average Temperature: %.2f\n", Avg_temp(day, n));
    return 0;
}
