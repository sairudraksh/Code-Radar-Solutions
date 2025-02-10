#include <stdio.h>
int main(){
    char n;
    scamf("%c",&n);
    if(n=='R'){
        printf("Stop");
    }
    else if(n=='G'){
        printf("Go");
    }
    else if(n=='Y'){
        printf("Slow Down");
    }

}