#include <stdio.h>
int main(){
    // output expression
    printf("hey there");
    printf("\n2+3");
    printf("\n%d",2+3);
    // user input
    float x=3.0;//declare+initialize, 3-->int , 3.0->floor
    int y;
    printf("\nEnter the num1: ");
    scanf("%d",&y); //&-->ampercnt
    printf("the value u entered is %d",y);
    float x2=5.0991; //---> precision to digits: %.2f
    printf("\n%.3f",x2);
    
    
    //format specifier: int-->%d, float-->%f, double-->%lf, char-->%c
    double x3=7.87;
    printf("\n%.1lf",x3);
    
    // condition operator: if-else
    int age;  
    printf("ENter ur age: ");
    scanf("%d",&age);
    // if age is greater or equal to 18, say u r adult else kiddo
    if(age>=18){ //18>=18--true, 43>=18--true, 10>=18 --false -->greater than or equal //18>=18
    printf("Adult");
    }
    else{
        printf("Child");
    }
    
    int n1;
    printf("Enter num1: ");
    scanf("%d",&n1);
    int n2;
    printf("Enter num2: ");
    scanf("%d",&n2);
    if(n1==n2){ //8==8--true  , 6==7--false
        printf("nums are equal");
    }
     
    //  program3:
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    // 98--even , 77--odd
    if(num%2==0){        
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    
    
    
    
    
    
    
    
    
   
    return 0;
}