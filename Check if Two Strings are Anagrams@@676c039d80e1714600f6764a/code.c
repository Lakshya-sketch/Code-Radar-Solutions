#include <stdio.h>
#include <string>
int main() {
    char str1[100],str2[100];
    scanf("%99s %99s",str1,str2);
    int flag = 0;
    int flag2 = 0;
    for ( int i = 0 ; i < strlen(str1) ;i++){
        for ( int j = 0 ; < strlen(str2) ;j++){
            if( str1[i] == str[j] ){
                flag = 1;
            }
        }
        if (!(flag)){
            flag2 = 0;
        }

    }
    if ( flag2 == "1"){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}