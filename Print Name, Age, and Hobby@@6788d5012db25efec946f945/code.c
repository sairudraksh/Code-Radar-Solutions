#include <stdio.h>
int main(){
    char a[100],b[200];
    int age;
    scanf("%s %d",&a,&age);
    scanf("%s",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",b);
    return 0;

}