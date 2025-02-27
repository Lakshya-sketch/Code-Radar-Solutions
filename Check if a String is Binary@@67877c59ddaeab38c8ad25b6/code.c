#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Read input string
    scanf("%s", str);

    int flag = 1; 
    int length = strlen(str); 

    for (int i = 0; i < length; i++) {
        if (str[i] != '0' && str[i] != '1') {
            flag = 0; 
            break;    
        }
    }

    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
