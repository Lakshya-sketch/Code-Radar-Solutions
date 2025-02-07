#include <stdio.h>

char print(int Roll_Number, char Name[], int Marks) {
    scanf("%d %99s %d", &Roll_Number, Name, &Marks);
    printf("Roll Number: %d  Name: %s  Marks: %d\n", Roll_Number, Name, Marks);
}

int main() {
    char Name[100];
    int Roll_Number, Marks;
    printf(print(Roll_Number,Name,Marks));
    printf(print(Roll_Number,Name,Marks));
    

    return 0;
}
