#include <stdio.h>

int main() {
   const chr str[100];
   scanf("%c",str);
   if ((str == "a") || (str == "e") || ( str == "i") || ( str == "o") || (str == "u")){
    printf("Vowel");
   }else if((str == "!") || (str == "@") || (str == "#") || (str == "$") || (str == "%") || (str == "^") || (str == "&") || (str == "*") || (str == "(") || (str == ")")){
    printf("Special Character");
   }else{
    printf("Consonant");
   }

    return 0;
}