#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};
int Top_scorer(struct Student students[], int n) {
    int max = 0;
    for (int i = 1; i < n; i++) {  
        if (students[i].marks > students[max].marks) {
            max = i; 
        }
    }
    return max; 
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    int Index = Top_scorer(students, n);
    printf("\nTop Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[topIndex].roll_number, students[topIndex].name, students[topIndex].marks);

    return 0;
}
