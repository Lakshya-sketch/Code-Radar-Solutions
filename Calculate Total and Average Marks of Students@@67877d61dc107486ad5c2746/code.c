#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};
void cal(struct Student students[], int n, int *total, float *average) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    *total = sum;
    *average = (float)sum / n;
}

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    int total_marks;
    float avg_marks;
    cal(students, n, &total_marks, &avg_marks);

    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", avg_marks);

    return 0;
}
