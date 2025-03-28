#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(i<n){
        if(arr[i]<0) i++;
        else if(arr[i]=arr[arr[i]-1] || arr[i]>n) i++;
        else {
            int temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[arr[i]-1]=temp;
        }
    }  
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            break;
        }
    }
}