#include <stdio.h>

struct Days {
    char name[10];
    int temp;
};

int Avg_temp(struct Days day[], int n) {
   int sum = 0;
   for ( int i = 0 ; i < n ; i++){
        sum = sum + day[i].temp;
   } 
   return sum/n
}

int main() {
    int n;
    scanf("%d", &n);
    struct Days day[n];

    for (int i = 0; i < n; i++) {
        scanf("%9s %d", day[i].name,&day[i].temp);
    }
    printf("Average Temprature: %.2f",Avg_temp(day[], n));
    return 0;
}