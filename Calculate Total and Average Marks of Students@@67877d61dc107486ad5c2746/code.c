#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int cal(int Student students[],int n){
    int sum;
    for( int i = 0 ; i < n ; i++){
        sum = sum + students[i].marks;
    }
    int avg = (sum/n);
    return avg,sum;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    int avg,sum = cal(int Student students[],int n);
    printf("Total Marks: %d\nAverage Marks: %d",avg,sum);
return 0;
}