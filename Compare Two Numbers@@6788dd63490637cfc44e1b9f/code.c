#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(a==b){
        printf("Equal");
    }
    else if(a>b){
        printf("First");
    }
    else{
        printf("Second");
    }
}