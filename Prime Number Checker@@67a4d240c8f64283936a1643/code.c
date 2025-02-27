int isPrime(int num){
    int flag = 1;
    if( num <= 2){
        return 1;
    }
    for( int i = 2 ; i <= (num/2) ;i++){
        if( num % i == 0){
            flag = 0;
        }
        else{
            flag = 1;
        }
    }
    return flag;
}