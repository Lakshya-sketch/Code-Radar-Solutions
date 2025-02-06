#inlcude <stdio.h>
int main(){
    int a,n;
    scanf("%d %d",&a,%n);
    int arr[a];
    for( int i = 0; i < a- 1 ; i++){
        scanf("%d",&arr[i]);
    }
    for( int i = 0; i < a ; i++){
        if ( arr[i] < arr[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
    return 0;
}
