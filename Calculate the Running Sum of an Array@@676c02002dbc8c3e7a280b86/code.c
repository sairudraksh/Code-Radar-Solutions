#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int i=0;
    while(i<n){
        int b=arr[i]
        sum=sum+b;
        printf("%d",sum);
        i++;
    }
}