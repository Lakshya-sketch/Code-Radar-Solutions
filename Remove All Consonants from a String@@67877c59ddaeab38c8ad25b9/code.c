#include <stdio.h>
#include <string.h>

int vowel(char str) {
    char = tolower(str); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(){
    char str[100];
    fgets(&str,100,stdin);
    for(int i = 0; i < strlen(str) ;i++){
        if(!(vowel(str[i]))){
            str[i] = " ";
        }
    }
    printf("%c",str);
    return 0;
}