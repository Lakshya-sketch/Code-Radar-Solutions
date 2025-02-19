#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for ( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int flag = 1;
    for ( int i = 0 ; i < a ; i++){
        if( (flag) && (arr[0] + arr[1] == target)){
                printf("%d %d\n",arr[0],arr[i]);
                break;
            }
        for( int i = 0 ; i < a ;i++){
            if(arr[0] == arr[i]){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
        for( int j = i + 1; j < a;j++){
            if ( arr[i] + arr[j] == target){
                    printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}