#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>max) max=arr[i];
        }
    }
    printf("%d",max);
}