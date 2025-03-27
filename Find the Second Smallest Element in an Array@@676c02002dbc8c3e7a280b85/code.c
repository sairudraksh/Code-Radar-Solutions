#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    int flagg=0;
    int smin=1000;
    for(int i=0;i<n;i++){
        if(arr[i]>min && arr[i]<smin){
            smin=arr[i];
            flagg=1;

        }
    }
    if(flagg==0) printf("%d",-1);
    else printf("%d",smin);
}