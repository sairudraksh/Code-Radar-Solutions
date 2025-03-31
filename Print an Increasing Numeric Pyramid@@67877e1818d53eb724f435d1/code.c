#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",a);
            a++;
        }
        nsp--;
        printf("\n");
    }
}