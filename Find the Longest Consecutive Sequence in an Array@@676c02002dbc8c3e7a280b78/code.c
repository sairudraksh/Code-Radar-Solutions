#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxcount=1;
    int z=0;
    int count=1;
    for(int i=z;i<n;i++){
        count=1;
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j+1]){
                for(int k=0;k<n;k++){
                    z++;
                    if(arr[k]>arr[j]) count++;
                    else break;
                }
            }
            else if(arr[i]<arr[j+1]){
                for(int l=0;l<n;l++){
                    z++;
                    if(arr[l]<arr[j]) count++;
                    else break;
                }
            }
            break;
        }
        if(count>maxcount) maxcount=count;
    }
    if(count+1==n) printf("%d",1);
    else printf("%d",maxcount+1);
}