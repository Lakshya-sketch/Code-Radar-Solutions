#include <stdio.h>

int main() {
    const chr str[100];
    int age;
    const chr hobby[100];
    scanf("%s",&str);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s",str);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}