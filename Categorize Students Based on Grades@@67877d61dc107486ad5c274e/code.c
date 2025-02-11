#include <stdio.h>

struct Student {
    int roll_number;
    char name[50],grade[2];
};

int Pass(struct Student students[], int n) {
    for ( int i = 0 ; i < n;i++){
        if( students[i].grade >= 85){
            return students[i].roll_number,students[i].name,"A";
        }
        else if((students[i].grade >= 70) && (students[i].grade <=84) ){
            return students[i].roll_number,students[i].name,"B";
        }
        else {
            return students[i].roll_number,students[i].name,"C";
        }
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].grade);
    }
    for ( int i = 0 ; i < n ;i++){
        printf("Roll Number: %d, Name: %s, Grade: %s",Pass(students[],n));
    }
    return 0;
}