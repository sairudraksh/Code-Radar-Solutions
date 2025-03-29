#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int smax=arr[0];
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
            x=1;
        }
    }
    if(x==1){
        printf("%d",smax);
    }
    else printf("%d",-1);
}