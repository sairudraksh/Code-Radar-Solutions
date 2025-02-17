#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else if(a>='A' && a<='B'){
        printf("Uppercase");
    }
    else{
        printf("Not a alphabet");
    }
}