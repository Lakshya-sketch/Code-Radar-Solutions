#include <stdio.h>

struct Student {
    float Length,breadth;
};

int Area(struct students student,int n){
    return students[i].Length * students[i].breadth;
}
int Peri(struct students student,int n){
    return students[i].Length + students[i].breadth;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &students[i].Length, students[i].breadth);
    }
    for(int i = 0 ; i < n ; i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",Area( students student,n),Peri(students student,n))
    }
    return 0;
}