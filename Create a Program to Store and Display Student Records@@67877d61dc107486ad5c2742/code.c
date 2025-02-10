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
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    return 0;
    for ( int i = 0; i < n; i++){
        printf("Roll Number: %d, Name: %s, Marks: %f",students.roll_number[i],students.name[i],students.marks[i]);
    }
}