#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int bool=0;
    int target;
    scanf("%d",&target);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                if(bool==1) continue;
                printf("%d ",arr[i]);
                printf("%d",arr[j]);
                if(i==j) bool=1;
                printf("\n");
            }
        }
    }
}