#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst++;
        nsp--;
        printf("\n");
    }
}