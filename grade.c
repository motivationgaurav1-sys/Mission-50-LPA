#include <stdio.h>
int main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90) {
        printf("grade: A+\n");
    } else if(marks>=70) {
        printf("grade: A");
    } else if(marks>=50) {
        printf("grade: B");
    } else {
        printf("fail");
    }
    return 0;
}