#include <stdio.h>

void print(int *Roll_Number, char *Name, int *Marks) {
    scanf("%d %99s %d", Roll_Number, Name, Marks);
    printf("Roll Number: %d | Name: %s | Marks: %d\n", *Roll_Number, Name, *Marks);
}

int main() {
    char Name1[100], Name2[100];
    int Roll_Number1, Marks1, Roll_Number2, Marks2;

    printf("Enter details for student 1 (Roll_Number Name Marks): ");
    print(&Roll_Number1, Name1, &Marks1);
    
    printf("Enter details for student 2 (Roll_Number Name Marks): ");
    print(&Roll_Number2, Name2, &Marks2);

    return 0;
}
