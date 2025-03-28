#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(arr[i]<=0) i++;
        else if(arr[i]==arr[arr[i]-1] || arr[i]>n) i++;
        else if(arr[i]!=arr[correctidx]) {
            int temp=arr[i];
            arr[i]=arr[correctidx];
            arr[correctidx]=temp;
        }
        else{
            i++;
        }
    }  
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            break;
        }
    }
}