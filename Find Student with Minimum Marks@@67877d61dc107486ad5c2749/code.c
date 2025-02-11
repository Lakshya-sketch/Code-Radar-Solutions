#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int Min(struct Student students[], int n) {
    int minIndex = 0;  
    float minMarks = students[0].marks;

    for (int i = 1; i < n; i++) {  
                if (students[i].marks < minMarks) {
            minMarks = students[i].marks;
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    int index = Min(students, n);
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[index].roll_number, students[index].name, students[index].marks);

    return 0;
}
