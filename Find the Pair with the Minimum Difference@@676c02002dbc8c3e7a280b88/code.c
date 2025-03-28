#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff=0;
    int mindiff=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                diff=arr[j]-arr[i];
            }
            else{
                diff=arr[i]-arr[j];
            }
            if(diff>mindiff) mindiff=diff;
            diff=0;
        }
    }
    printf("%d",mindiff);
}