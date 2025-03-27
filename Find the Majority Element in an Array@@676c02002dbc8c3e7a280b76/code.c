#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flagg=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]) count++;
        }
        if(count>(n/2)){
            printf("%d",arr[i]);
            flagg=1;
            break;
        }
    }
    if(flagg==0) printf("%d",-1);
}