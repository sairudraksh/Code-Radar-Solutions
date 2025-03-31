#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}