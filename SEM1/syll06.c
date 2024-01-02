// check wether two values entered are equal or not

#include<stdio.h>
#include<conio.h>

float eq(float a, float b);
int main(){
    float a,b;
    int check;
    printf("Enter the first number:\t");
    scanf("%f",&a);
    printf("Enter the second number:\t");
    scanf("%f",&b);

    // checking
    /*                                                          EASY METHOD
    if (a==b)
    {
        printf("these two numbers are equal.");
    }
    else
    {
        printf("these two numbers are not equal.");
    }                                                   */
    
    check=eq(a,b);
    if(check)printf("EQUAl.");                      // true 
    else printf("NOT EQUAL.");                      // false
    
    return 0;
    
}
float eq(float a, float b){
    if (a==b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}