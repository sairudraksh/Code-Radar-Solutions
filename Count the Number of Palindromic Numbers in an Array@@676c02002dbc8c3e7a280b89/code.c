#include<stdio.h>
int palindrome(int n){
    int sum=0;
    while(n>0){
        int num=n%10;
        sum=(sum*10)+num;
        num=num/10;
    }
    if(n==sum) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=palindrome(arr[i]);
        if(a==1) count++;
    }
    printf("%d",count);
}