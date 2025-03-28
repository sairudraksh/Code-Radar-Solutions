#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff=0;
    int mindiff=110000;
    int idx1=0;
    int idx2=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                diff=arr[j]-arr[i];
            }
            else{
                diff=arr[i]-arr[j];
            }
            if(diff<mindiff){
                mindiff=diff;
                idx1=arr[i];
                idx2=arr[j];
            }
            diff=0;
        }
    }
    if(idx2<idx1){
        printf("%d ",idx2);
        printf("%d",idx1);
    } 
    if(idx2<idx1){
        printf("%d ",idx1);
        printf("%d",idx2);
    } 
}