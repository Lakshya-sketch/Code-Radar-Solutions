#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int func( int Student students,int n, int marks){
    for( int i = 0 ; i < n;i++){
        if(Student[i].marks > mark){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    float mark;
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    scanf("%f",&mark);
    printf("Count of students scoring above %.2f: %d",mark,func( int Student students,int n, int marks));
    return 0;
}