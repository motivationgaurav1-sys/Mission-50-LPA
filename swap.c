#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter two value to swap: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swaped values are %d %d",a,b);
}