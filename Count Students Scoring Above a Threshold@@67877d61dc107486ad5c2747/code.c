#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Corrected function signature and logic
int func(struct Student students[], int n, float mark) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > mark) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    float mark;
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    scanf("%f", &mark);
    printf("Count of students scoring above %.2f: %d\n", mark, func(students, n, mark));

    return 0;
}
