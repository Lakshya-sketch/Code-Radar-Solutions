#include <stdio.h>
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    printf("%c",arr);
    return 0;
}