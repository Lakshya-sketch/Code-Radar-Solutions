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
        scanf("%d %49s %f",Student.roll_number[i],Student.name[i],Student.marks[i]);        
    }
    for (int i = 0; i < n; i++) {  
       printf("%d %49s %f",Student.roll_number[i],Student.name[i],Student.marks[i]);
       printf("\n");
    }

    return 0;
}
