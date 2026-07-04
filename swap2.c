#include <stdio.h>
int main(){
    int a,b;
    printf("enter value to swap: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swaped values are %d %d",a,b);
}