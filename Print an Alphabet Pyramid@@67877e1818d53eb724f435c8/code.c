#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<=(65+i-1);j++){
            printf("%c",(char)j);
            printf(" ");
        }
        printf("\n");
    }
}