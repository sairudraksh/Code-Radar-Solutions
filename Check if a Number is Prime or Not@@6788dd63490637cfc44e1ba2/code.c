#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    bool flag =false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag==false){
        printf("Prime")
    }
    else{
        printf("Not Prime");
    }
}