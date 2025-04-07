int isPrime(int n){
    if(n==1) return 0;
    else if(n==2) return 0;
    int flagg=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flagg=0;
            break;
        }
    }
    return flagg;
}