#include <stdio.h>
int main(){
    printf("hello world\n");
    printf("gaurav pundir\n");
    int a,b,c;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b; // Program to calculate the sum
    printf("sum of %d and %d is %d\n",a,b,c);
    c=a-b; // Program to calculate the subration
    printf("subtraction of %d and %d is %d\n",a,b,c);
    c=a*b; // Program to calculate the multiplication
    printf("multiplication of %d and %d id %d\n",a,b,c);
    c=a/b; // Program to calculate the division
    printf("division of %d and %d is %d\n",a,b,c);
    c=a*b; // Program to calculate the area of rectangle
    printf("area of rectangle of lenght %d and breath %d is %d\n",a,b,c);
    float d,radius; // Program to calculate the area of a circle
    printf("radius of circle: ");
    scanf("%f",&radius);
    d=3.14*radius*radius;
    printf("area of circle is %f\n",d);
    float si,p,r,t; // Program to calculate the simple intrest
    printf("enter the principal,rate of interest, time\n");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("simple interest is %f",si);
    // Program to calculate the celsius to fahrenheit
float cel,f;
printf("enter the value of celsius");
scanf("%f",&cel);
f=9.0/5*cel + 32;
printf("fahrenheitvalue is%f",f);


    



}