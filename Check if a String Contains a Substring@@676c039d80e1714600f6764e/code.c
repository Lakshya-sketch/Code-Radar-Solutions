#include <stdio.h>
#include <string.h>  // Include for strstr() and strcmp()

int main() {
    char str[100], str1[100];
    fgets(str, 100, stdin);
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;
    char *Ptr = strstr(str, str1);
    if (Ptr != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
