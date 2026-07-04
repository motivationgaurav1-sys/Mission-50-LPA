#include <stdio.h>
int main(){
    int minutes,hour,remainingminutes;
    printf("enter minutes: ");
    scanf("%d",&minutes);
    hour=minutes/60;
    remainingminutes=minutes%60;
    printf("%d hour %d minute",hour,remainingminutes);


}
