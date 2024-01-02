//swap values of two variables using the third

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter the value of first variable \'a\':\t ");
    scanf("%d",&a);
    printf("Enter the value of first variable \'b\':\t ");
    scanf("%d",&b);

    // swapping
    c=a;
    a=b;
    b=c;
    printf("Value of a : %d\nValue of b : %d\n",a,b); 

    return 0;
}