#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c) {
        printf("%d is the largest of all",a);
    } else if(b>a&&b>c) {
     printf("%dis the larget in all",b);
    } else {
    printf("%d is the largest of all",c);
    }
    return 0; 
    }
