#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float grade;
};

void AssignGrades(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        char grade;
        if (students[i].grade >= 85) {
            grade = 'A';
        } else if (students[i].grade >= 70) {
            grade = 'B';
        } else {
            grade = 'C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, grade);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].grade);
    }

    AssignGrades(students, n);

    return 0;
}
