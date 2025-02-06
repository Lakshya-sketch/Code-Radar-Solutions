#include <stdio.h>

void print(int Roll_Number , char Name , int Marks){
    scanf("%d %c %d",Roll_Number,Name,Marks);
    printf("Roll Number: %d Name: %c Marks: %d",Roll_Number,Name,Marks);
    return void;
}

int main() {
    char Name[100];
    int Roll_Number,Marks;
    print(Roll_Number,Name,Marks);
    print(Roll_Number,Name,Marks);
    return 0;
}