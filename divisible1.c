#include <stdio.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x%3==0&&x%5==0) {
        printf("divisible");

    } else {
        printf("not divisible");

    }
return 0;

}