#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flagg=0;
    int idx=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                break;
                flagg=1;
            }
        } 
        if(flagg==0){
            idx=i;
            break;
        }
    }
    for(int i=idx;i<n;i++){
        printf("%d ",arr[i]);
    }
}