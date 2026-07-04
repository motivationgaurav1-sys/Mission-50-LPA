#include <stdio.h>
int main(){
    float perimeter,l,w;
    printf("value of lenght and width: ");
    scanf("%f%f",&l,&w);
    perimeter=2*(l+w);
    printf("perimeter of rectangle is %f",perimeter);
    return 0;

}