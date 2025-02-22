#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int Max = 0, a;

    for (int i = 0; i < strlen(str); i++) {
        int count = 0;
        for (int j = 0; j < strlen(str); j++) { 
            if (str[i] == str[j]) { 
                count++;
            }
        }
        
        if (count > Max || (count == Max && str[i] < str[a])) {
            Max = count;
            a = i;
        }
    }
    
    printf("%c", str[a]); 

    return 0;
}
