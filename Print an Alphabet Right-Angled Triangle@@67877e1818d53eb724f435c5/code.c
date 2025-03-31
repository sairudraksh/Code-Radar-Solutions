#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b=1;
        for(int j=0;j<=i;j++){
            printf("%c ",64+b);
            b++;
        }

        printf("\n");
    }
}