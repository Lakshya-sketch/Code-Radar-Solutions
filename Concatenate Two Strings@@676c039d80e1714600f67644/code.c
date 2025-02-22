#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,99,stdin);
    fgets(str2,99,stdin);
    char *str3;
    str3 = strcat(str3,str1);
    str3 = strcat(str3,str2);
    puts(str3);
    return 0;
}