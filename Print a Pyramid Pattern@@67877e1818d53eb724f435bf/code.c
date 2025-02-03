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
        nsp--;
        for(int i=0;i<nst;i++){
            printf("*");
        }
        nst=nst+2;
    }
    return 0;
}