#include<stdio.h>
void rotatearray(int i,int j,int arr[]){
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    if(k>=n){
        k=k%n;
    }
    rotatearray(0,n-k-1,arr);
    rotatearray(n-k,n-1,arr);
    rotatearray(0,n-1,arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}