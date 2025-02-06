#include <stdio.h>

void print(int *Roll_Number, char *Name, int *Marks) {
    scanf("%d %s %d", Roll_Number, Name, Marks);
    printf("Roll Number: %d Name: %s Marks: %d", *Roll_Number, Name, *Marks);
}

int main() {
    char Name1[100], Name2[100];
    int Roll_Number1, Marks1, Roll_Number2, Marks2;
    print(&Roll_Number1, Name1, &Marks1);
    printf("\n");
    print(&Roll_Number2, Name2, &Marks2);
    
    return 0;
}
