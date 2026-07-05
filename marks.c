#include <stdio.h>
int  main(){
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);
    printf("%d",marks>=0&&100>=marks);  //35 --> 35>=0 true , 100>=35 true, so 1 and 1 gives 1
}