#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf ("enter marks of each subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5;
    printf("avg of total marks obtained is %d",f);

}