#include <stdio.h>
int main(){
    char alphabet;
    printf("enter a alphabet");
    scanf("%c",&alphabet);
    if(alphabet>='a'&&alphabet<='z') {
        printf("lowercase");
    } else if(alphabet>='A'&&alphabet<='Z') {
        printf("uppercase");
    } else {
        printf("character");
    }
    return 0;
}