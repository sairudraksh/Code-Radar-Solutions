#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    for(int i=0;i<n;i++){
        int b=1;
        for(int j=0;j<a;j++){
            printf("%c ",65+b);
            b++;
        }
        a--;
        printf("\n");
    }
}