#include<stdio.h>
int main(){
    int n;
    scanf("%d"&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxcount=1;
    for(int i=z;i<n;i++){
        int count=1;
        for(int j=i;j<n;j++){
            z++;
            if(arr[i]>arr[j]) count++;
        }
        if(count>maxcount) maxcount=coun;
    }
    printf("%d",maxcount);
}