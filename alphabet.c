#include <stdio.h>
int main(){
    char alphabet;
    printf("enter a character");
    scanf("%c",&alphabet);
    if(alphabet>='a'&& alphabet<='z'||alphabet>='A'&& alphabet<='Z') {
        printf("alphabet");

    } else {
        printf("character");
    }
return 0;
}