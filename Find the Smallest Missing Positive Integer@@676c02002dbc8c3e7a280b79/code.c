#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int idx=0;
    while(i<n-1){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<=min){
                min=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[idx]=temp;
        i++;
        idx=i;
    }
    int flagg=0;
    for(int i=0;i<n;i++){
        if(arr[i]+1!=arr[i+1] && arr[i+1]!=0){
            printf("%d",i+2);
            flagg=1;
        }
    }
    if(flagg==0) printf("%d",arr[n-1]+1);
    
}