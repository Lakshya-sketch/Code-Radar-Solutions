#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};
float average(struct Student students[], int n) {
    float sum = 0;  
    for (int i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    printf("Average Marks: %.2f\n", average(students, n));

    return 0;
}
