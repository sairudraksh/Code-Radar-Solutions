#include <stdio.h>
int main(){
    char i;
    scanf("%c",&i);
    if(i>='a' && i<='z'){
        printf("Lowercase");
    }
    else if(i>='A' && i<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}