#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    bool flagg=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        flagg=false;
        break;
    }
    if(flagg==true) printf("Sorted");
    else prinf("Not Sorted");
}