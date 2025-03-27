#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=-1;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d\n",arr[i]);
            found=0;
            break;
        }
    }
    if(found==-1){
        if(arr[n-1]>arr[n-2]){
            printf("%d",arr[n-1]);
        }
        else{
            printf("%d",found);
        }
    }
}