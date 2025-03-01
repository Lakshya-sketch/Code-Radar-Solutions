#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for( int i = 0 ; i <= strlen(str) ;i++ ){
        if(str[i] == " "){
            str[i] = '';
        }
    }
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("No\n");
            return 0;
        }
        else{
            printf("Yes")
        }
    }
    
    return 0;
}