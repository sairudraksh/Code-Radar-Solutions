#include<stdio.h>
int summ(int n){
    int sum=0;
    while(n>0){
        int num=n%10;
        sum=sum+num;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=summ(arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
} 