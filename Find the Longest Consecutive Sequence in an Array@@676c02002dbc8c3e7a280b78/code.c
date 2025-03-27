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
            z++;
            if(arr[i]>arr[j]) count++;
        }
        if(count>maxcount) maxcount=count;
    }
    if(count==n) printf("%d",1);
    printf("%d",maxcount);
}