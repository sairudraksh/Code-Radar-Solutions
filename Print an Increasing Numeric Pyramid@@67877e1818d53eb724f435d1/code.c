#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int k=0;k<n;k++){
        for(int i=0;i<nsp;i++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);
            printf(" ");
        }
        printf("\n");
    }
}