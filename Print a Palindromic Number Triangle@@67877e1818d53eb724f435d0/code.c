#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        for(int z=0;z<i;z++){
            printf("%d",z);
        }
        nsp--;
        nst+=1;
        printf("\n");
    }
}