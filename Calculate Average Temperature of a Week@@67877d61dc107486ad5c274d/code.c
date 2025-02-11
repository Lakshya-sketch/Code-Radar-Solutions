#include <stdio.h>

struct Days {
    char name[10];
    int temp;
};

float Avg_temp(struct Days day[]) {
   float sum = 0;
   for (int i = 0; i < 7; i++) {
       sum += day[i].temp;
   }  
   return sum / 7; 
   }

int main() {
    struct Days day[7];
    for (int i = 0; i < 7; i++) {
        scanf("%9s %d", day[i].name, &day[i].temp);
    }

    printf("Average Temperature: %.2f\n", Avg_temp(day));
    return 0;
}
