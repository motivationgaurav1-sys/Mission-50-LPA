#include <stdio.h>
int main(){
    int area,base,height;
    printf("enter value of base and height: ");
    scanf("%d%d",&base,&height);
    area=(base*height)/2;
    printf("area of triangle is %d",area);
}