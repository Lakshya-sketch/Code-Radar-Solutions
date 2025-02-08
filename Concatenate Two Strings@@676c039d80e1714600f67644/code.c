#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100],str3[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("%s",str3);
    return 0;
}