#include <stdio.h>
struct Student {
    int roll_number;
    char name[50];
    float marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        
        scanf("%d", &students[i].roll_number);
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        scanf("%f", &students[i].marks);
    }
    for (int i = 0; i < n; i++) {  
        printf("Roll Number: %d, ", students[i].roll_number);
        printf("Name: %s", students[i].name); 
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
