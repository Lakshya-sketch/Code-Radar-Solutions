#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int flag=1;
    for( int i = 0 ; i < strlen(str)  ;i++ ){
        if((str[i] == 0) || (str[i] == 1)){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    if(flag){
        printf("Yes");
    }
    if(!(flag)){
        printf("No");
    }
    return 0;
}