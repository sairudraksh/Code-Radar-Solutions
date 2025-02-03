#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<a;j++){
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}