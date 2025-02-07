#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        printf("\n");
        if(i<n){
            nsp--;
            nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
    }
}