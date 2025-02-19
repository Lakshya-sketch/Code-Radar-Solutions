#include<stdio.h>

int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for( int i = 0; i < n ;i++){
        if( (arr[i] == 0) && (arr[i+1] == 0) ){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
        else if ((arr[i] == 0) && (arr[i+1] != 0)){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
        else{
            break;
        }
    }
    for ( int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}