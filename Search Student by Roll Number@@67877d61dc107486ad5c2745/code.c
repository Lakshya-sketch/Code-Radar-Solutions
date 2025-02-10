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
    int roll_number;
    scanf("%d", &roll_number);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
