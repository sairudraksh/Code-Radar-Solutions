#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int flagg=0;
    while (i < n) {
        int correctidx = arr[i] - 1;
        if (arr[i]<=0||arr[i]>n||arr[i]==arr[correctidx]) {
            i++;
        } else {
            int temp = arr[i];
            arr[i] = arr[correctidx];
            arr[correctidx] = temp;
            flagg=1;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            break;
        }
    }
    if(flagg==1) printf("%d",arr[n-1]+1);
}