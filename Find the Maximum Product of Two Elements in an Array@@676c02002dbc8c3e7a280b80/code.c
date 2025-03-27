#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            arr[i]=arr[i]-(arr[i])-arr[i];
        }
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smax &&  arr[i]<max) max=arr[i];
    }
    printf("%d",max*smax);

}