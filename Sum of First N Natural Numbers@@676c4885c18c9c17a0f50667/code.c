#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    print("%d",sum);
}