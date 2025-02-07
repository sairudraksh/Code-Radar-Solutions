#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<=(int)'Z';j++){
            printf("%c",(char)'j');
            printf(" ");
        }
        printf("\n");
    }
}