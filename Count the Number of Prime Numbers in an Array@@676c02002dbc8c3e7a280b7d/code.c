#include<stdio.h>
int isprime(int n){
    if(n==0 || n==1) return 1;
    else if(n==2) return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int a=isprime(i);
        if(a==1) count++;
    }
    printf("%d",count);
}