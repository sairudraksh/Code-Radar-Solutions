#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}