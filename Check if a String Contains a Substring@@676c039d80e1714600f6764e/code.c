#include<stdio.h>
int main(){
    char Str[100],str1[100];
    fgets(str,100,stdin)

    char *Ptr = strstr(Str, "ain");
    int cmp = strcmp(str,str1);
    if(!(cmp)){
        printf("Yes");
    }else{
        printf("No")
    }
    return 0;
}