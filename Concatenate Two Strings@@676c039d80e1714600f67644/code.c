#include <stdio.h>
int main(){
    char str1[100],str2[100],str3[100];
    scanf("%99s %99s",str1,str2);
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("%s",str3);
    return 0;
}