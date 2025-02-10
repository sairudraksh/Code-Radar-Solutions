#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
                ans=0;
            }
            else{
                ans=1;
            }
        for(int j=0;j<=i;j++){
            printf("%d",ans);
            printf(" ");
        }
        if(ans==0){
            ans=1;
        }
        else{
            ans=0;
        }
    }
}