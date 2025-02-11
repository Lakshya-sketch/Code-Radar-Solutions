#include <stdio.h>

struct Student {
    float Length, breadth;
};

float Area(struct Student student) {
    return student.Length * student.breadth;
}

float Peri(struct Student student) {
    return 2 * (student.Length + student.breadth);
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &students[i].Length, &students[i].breadth);
    }
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, Area(students[i]), Peri(students[i]));
    }

    return 0;
}
