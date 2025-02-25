#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

struct pair{
    int differ;
    int a,b;
};

int main() {
    int a;
    scanf("%d", &a);

    struct pair diff[a];

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int difference,index;
    int min = INT_MAX; 
    for( int i = 0 ; i < a ;i++){
        if( i == 0){
            difference = abs(arr[a-1] - arr[0]);
            diff[i].differ = difference;
            diff[i].a = arr[a-1];
            diff[i].b = arr[0];
        }else if( i == (a-1) ){
            continue;
        }
        else{
            difference = abs(arr[i+1] - arr[i]);
            diff[i].differ = difference;
            diff[i].a = arr[i];
            diff[i].b = arr[i+1];
        }
        if(min > diff[i].differ){
            min = diff[i].differ;
            index = i;
        }
    }
    printf("%d %d",diff[index].a,diff[index].b);
    

    return 0;
}
