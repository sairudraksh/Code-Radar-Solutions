#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    int k=0;
    for(int i=n-1;i>=0;i--){
        arr2[k]=arr[i];
        k++;
    }
    int bol=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            printf("%s","NO");
            bol=1;
            break;

        }
    }
    if(bol==0){
        printf("%s","YES");
    }

}