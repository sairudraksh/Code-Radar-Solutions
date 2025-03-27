#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) evencount++;
        else oddcount++;
    }
    printf("%d ",evencount);
    printf("%d",oddcount);

}