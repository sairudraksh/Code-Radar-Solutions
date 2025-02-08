#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%c",&c);
    if(c=='+'){
        printf(a+b);
    }
    else if(c=='-'){
        printf(a-b);
    }
    else if(c=='/'){
        printf(a/b);
    }
    else if(c=='*'){
        printf(a*b);
    }
}