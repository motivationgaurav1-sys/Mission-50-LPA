#include <stdio.h>
int main(){
    int x;
    printf("enter your marks: ");
    scanf("%d",&x);
    if(x>=33) {
        printf("pass.\n");
    } else {
        printf("fail");
    } 
    return 0;
}