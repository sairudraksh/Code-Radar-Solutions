#include <stdio.h>
int main(){
    int n;
    scamf("%c",&n);
    if(n=='R'){
        printf("Stop");
    }
    if(n=='G'){
        printf("Go");
    }
    if(n=='Y'){
        printf("Slow Down");
    }

}