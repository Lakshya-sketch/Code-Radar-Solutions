#include <stdio.h>

void print(int *Roll_Number, char *Name, int *Marks){
    scanf("%d %s %d", &Roll_Number, &Name, &Marks);
    printf("Roll Number: %d Name: %s Marks: %d", *Roll_Number, Name, *Marks);
}

int main() {
    char Name[100];
    int Roll_Number, Marks;
    print(&Roll_Number, Name, &Marks);
    prinf("\n");
    print(&Roll_Number, Name, &Marks);
    return 0;
}