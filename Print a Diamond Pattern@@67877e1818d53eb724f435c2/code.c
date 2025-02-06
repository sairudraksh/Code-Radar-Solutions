#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<nsp;j++){
            printf(" ");
        }
        for(int k=0;k<nst;k++){
            printf("*");
        }
        printf("\n");
        if(i<=n-1){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
    }
}