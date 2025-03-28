#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flagg=0;
    int i=0;
    if(arr[i]<arr[i+1]){
        for(int j=i+1;j<n-1;j++){
            if(arr[j]!<arr[j+1])
            flagg=1;
            break;
        }
    }
    if(arr[i]>arr[i+1]){
        for(int j=i+1;j<n-1;j++){
            if(arr[j]!>arr[j+1])
            flagg=1;
            break;
        }
    }
    if(flagg==1) printf("%s","NO")
    else printf("%s","YES");
}