#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    while (i < n) {
        int correctidx = arr[i] - 1;
        if (arr[i]<=0||arr[i]>n||arr[i]==arr[correctidx]) {
            i++;
        } else {
            int temp = arr[i];
            arr[i] = arr[correctidx];
            arr[correctidx] = temp;
        }
    }
    int flagg=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            flagg=1;
            break;
        }
    }
    if(flagg==0) printf("%d",n+1;)
   
}