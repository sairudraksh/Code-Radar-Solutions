#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        int a=i;
        for(int l=0;l<i;l++){
            printf("%d",a);
            a--;
        }
        nsp--;
        nst++;
        printf("\n");
    }
}