#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int min=arr[0];
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    printf("%d",min);
    printf("%d",max);
}