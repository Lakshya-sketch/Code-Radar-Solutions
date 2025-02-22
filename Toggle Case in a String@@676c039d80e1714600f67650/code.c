#include<stdio.h>
#include<string.h>
int main(){
    char *str1[100];
    fgets(str1,100,stdin);
    for(int i = 0 ; i <= strlen(str) ; i++){
        if( islower(str[i])){
            str[i] = toupper(str[i]);
        }elsr{
            str[i] = tolower(str[i]);
        }
    }
    puts(str);
    return 0;
}