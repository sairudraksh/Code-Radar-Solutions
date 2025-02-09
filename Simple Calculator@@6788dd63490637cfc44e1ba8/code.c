#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    if(c=='+'){
        printf("%d\n",a+b);
    }
    else if(c=='-'){
        printf("%d\n",a-b);
    }
    else if(c=='/'){
        printf("%d\n",a/b);
    }
    else if(c=='*'){
        printf("%d\n",a*b);
    }
}