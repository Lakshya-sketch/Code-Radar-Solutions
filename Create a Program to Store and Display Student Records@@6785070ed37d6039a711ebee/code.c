#include <stdio.h>
struct Student {
    int roll_number;
    char name[50];
    float marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f",students.roll_number[i],students.name[i],students.marks[i]);        
    }
    for (int i = 0; i < n; i++) {  
       printf("%d %49s %f",students.roll_number[i],students.name[i],students.marks[i]);
       printf("\n");
    }

    return 0;
}
