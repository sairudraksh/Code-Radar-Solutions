#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int flagg=1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            flagg=0;
            break;
        }
    }
    if(flagg==1) printf("%d",-1);
}