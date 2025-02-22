#include<stdio.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int sum1 = 0,sum2 = 0;
    for( int i = 0; i < strlen(str1) ; i++){
        sum1 = sum1 + (int)str1[i];
        sum2 = sum2 + (int)str2[i];
    }
    if( sum1 == sum2){
    printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}