#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int Min(struct Student students[], int n, float mark) {
    int Min = 999;
    for (int i = 0; i < n; i++) {
        if (students[i].marks < Min) {
            Min = i;
        }
    }
    return Min;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    index = func(students, n, mark);
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s ,Marks: %.2f", students[index].roll_number,students[index].name,students[index].marks);

    return 0;
}
