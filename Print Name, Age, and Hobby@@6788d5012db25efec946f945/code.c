#include <stdio.h>

int main() {
    const char str[100];
    int age;
    const char hobby[100];
    scanf("%s",&str);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s",str);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}