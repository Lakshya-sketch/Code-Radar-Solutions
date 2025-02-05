#include <stdio.h>

int main() {
    int age,Citi;
    scanf("%d %d",&age,&Citi);
    if((age > 20 ) &&  (Citi == 1)){
        printf("Eligible");
    }else if(( age < 20 ) && (Citi == 1)){
        printf("Not Eligible");
    }
    else if ( ( age < 20 ) && ( Citi == 0)){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}