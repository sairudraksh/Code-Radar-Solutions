void isPrime(int n){
    int flagg=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flagg=0;
            break;
        }
    }
    return flagg;
}