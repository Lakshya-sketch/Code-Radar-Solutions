#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int Pass(struct Student students[], int n) {
    int flag = 1;
    for( int i = 0 ; i < n ;i++){
    if( students[i].marks > 50 ){
        flag = 1;
    }
    else{
        flag = 0;
        break;
    }
    }
    return flag;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %49s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    if (Pass(students, n)){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }

    return 0;
}
