#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200]; 
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    str3[0] = '\0';
    strcat(str3, str1);
    strcat(str3, str2);
    puts(str3);
    return 0;
}
