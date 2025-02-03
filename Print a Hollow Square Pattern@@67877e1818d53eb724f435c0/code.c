#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i==0 || i==2*n-1){
            for(int i=0;i<n;i++){
                printf("*");
            }
        }
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}