#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int flagg=0;
        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]) flagg=1;
        }
        if(flagg==0){
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]) count++;
            }
            printf("%d ",arr[i]);
            printf("%d",count);
            printf("\n");
            count=0;
        }
    } 
}