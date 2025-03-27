#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(i<n){
        if(nums[i]<=0) i++;
        else if(nums[i]>n || nums[i]==nums[nums[i]-1]) i++;
        else{
            int temp=nums[i];
            nums[i]=nums[nums[i]-1];
            nums[nums[i]-1]=temp;
        }

    }
    int flagg=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",arr[i]);
            flagg=1;
            break;

        }
    }
    if(flagg==0){
        printf("%d",arr[n-1]+1);
    }
    
}