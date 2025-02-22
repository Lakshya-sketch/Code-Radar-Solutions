#include<stdio.h>
int main(){
    char str[100],str1[100];
    fgets(str,100,stdin);
    fgets(str1,100,stdin);
    char *Ptr = strstr(str,str1);
    int cmp = strcmp(str,str1);
    if(!(cmp)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}