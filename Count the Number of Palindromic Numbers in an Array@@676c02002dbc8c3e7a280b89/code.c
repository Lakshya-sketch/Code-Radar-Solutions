#include <stdio.h>

void Is_Palendrome(arr[i]){
    int last_digit,num,reverse = 0;
    num = arr[i];
    original = num;    
    while (num > 0) {
        digit = num % 10;       
        reverse = reverse * 10 + digit; 
        num /= 10;               
    }
    if ( original == reverse){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for( int i = 0 ; i < a ; i ++){
        n
        if(Is_Palendrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}