#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        if(i%2==0) a=1;
        else a=0;
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
}