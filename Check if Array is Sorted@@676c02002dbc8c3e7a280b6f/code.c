#inlcude <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for( int i = 0; i < sizeof(arr) ; i++){
        if ( arr[i] < arr[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
    return 0;
}
