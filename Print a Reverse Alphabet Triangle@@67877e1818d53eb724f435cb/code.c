#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=65,j<=65+i-1;i++){
            printf("%c",char(j));
        }
        printf("\n");
    }
}