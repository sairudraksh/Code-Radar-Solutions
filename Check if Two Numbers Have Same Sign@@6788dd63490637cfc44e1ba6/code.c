#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if((a>0 && b>0)||(a<0 && b<0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
}