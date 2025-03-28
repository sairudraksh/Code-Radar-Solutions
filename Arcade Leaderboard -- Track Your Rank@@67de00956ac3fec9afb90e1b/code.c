#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int n1;
    scanf("%d",&n1);
    int arr2[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr2[i]);
    }
    int x=1;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==n-1 && arr[j]<arr2[i]){
                printf("%d\n",x+1);
                x=1;
                break;
            }
            else if(arr[j]<arr2[i]){
                printf("%d\n",x);
                x=1;
                break;
            }
            else if(arr[j]>arr2[i]){
                x++;
            }
        }
    }
}