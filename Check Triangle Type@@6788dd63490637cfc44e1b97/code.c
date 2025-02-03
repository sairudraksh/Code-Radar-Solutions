#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+c<b || a+b<c || b+c<a){
        printf("Invalid Triangle");
    }
    if(a==b && a==c &&b==c){
        printf("Equilateral");
    }
    else if(a==b || a==c || b==c){
        printf("Isosceles");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    return 0;
}