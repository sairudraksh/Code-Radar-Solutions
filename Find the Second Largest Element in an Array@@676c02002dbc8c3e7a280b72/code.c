#include<stdio.h>
int main(){
    int n;
    scnaf("%d",&n);
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
    smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
        }
    }
}