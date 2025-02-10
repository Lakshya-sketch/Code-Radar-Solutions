#include <stdio.h>
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int average(int students[i].marks, int n){
    int sum = 0;
    for( int i = 0 ; i < n ; i++){
        sum = sum + students[i].marks;
    }
    int Avg = (sum/n);
    return Avg
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    printf("Average Marks: %.2f",average(int students[i].marks, int n));
    return 0;
}