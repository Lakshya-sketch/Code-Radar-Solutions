#include <stdio.h>
#include <string.h>
int main() {
    char str1[100],str2[100];
    scanf("%99s %99s",str1,str2);
    int flag = 0;
    int flag2 = 0;
    for ( int i = 0 ; i < strlen(str1) ;i++){
        for ( int j = 0 ;  j< strlen(str2) ;j++){
            if( str1[i] == str2[j] ){
                flag = 1;
            }
        }
        if (!(flag)){
            flag2 = 0;
        }
        else{
            flag2 = 1;
        }

    }
    if ( flag2 == '1'){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}