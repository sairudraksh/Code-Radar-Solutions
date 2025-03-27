#include<stdio.h>
void rotatearray(int i,int j,int arr[]){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    int k;
    scanf("%d",k);
    int n=sizeof(arr)/sizeof(arr[0]);
    rotatearray(0,k,arr);
    rotatearray(k+1,n-1,arr);
    rotatearray(0,n-1,arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i])
        printf(\n);
    }
}