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
        if(arr[i]>max) max=arr[i];
    }
    int smax=arr[0];
    int flagg=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=smax && arr[i]<max){
            smax=arr[i];
            flagg=1;
        }
    }
    if(flagg==0) printf("%d",-1);
    else printf("%d",smax);

}