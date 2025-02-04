#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<nsp;j++){
            printf(" ");
        }
        nsp=nsp-1;
        for(int k=0;k<nst;k++){
            printf("*");
            nst=nst+1;
        }
        printf("\n");
    }
}