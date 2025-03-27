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
        if(arr[i]<=0) i++;
        else if(arr[i]>n || arr[i]==arr[arr[i]-1]) i++;
        else{
            int temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[arr[i]-1]=temp;
        }

    }
    int flagg=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=j+1){
            printf("%d",arr[j]);
            flagg=1;
            break;

        }
    }
    if(flagg==0){
        printf("%d",arr[n-1]+1);
    }
    
}