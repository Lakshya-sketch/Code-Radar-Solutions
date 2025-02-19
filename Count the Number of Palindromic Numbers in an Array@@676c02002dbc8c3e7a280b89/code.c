#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for ( int i = 0 ; i < n ; i++){
        int rem,ans,Pale;
        Pale = arr[i];
        while(Pale != 0){
            rem = Pale % 10;
            ans = ( ans * 10 ) + rem;
            ans /= 10;
        }
        if ( ans == arr[i]){
            count++;
        }
    }
    printf("%d",&count);
    return 0;
}