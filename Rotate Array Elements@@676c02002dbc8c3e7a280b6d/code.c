#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for( int i = 0 ; i < b ; i++){
        if( i == sizeof(arr) - 1){
            arr[(sizeof(arr)-1)] = arr[0];  
        }
        else{
            arr[i] = arr[i+1];
        }
    }
    for(int i = 0 ; i <= a ; i++){
        printf("%d \n",arr[i]);
    }
}