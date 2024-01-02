// get the radius and print the area and circumference of the circle

#include<stdio.h>
#include<conio.h>
float area(float n);
float circum(float n);
int main(){
  
    float rad,ar,cf;
    printf("Enter the radius of the given circle:\t ");
    scanf("%f",&rad);
    
   /*    EASY METHOD
    cf=2*(22/7)*rad;
    ar=(22/7)*rad*rad;
    printf("For the given circle of %.2f radius , area is %.2f and the circumference is %.2f./n",rad,ar,cf);
    */

   ar=area(rad);
   cf=circum(rad);

   printf("area of the circle=%.2f\n",ar);
   printf("circumference of the circle=%.2f",cf);
return 0;
}

float area(float n){
    float PI=22/7,a;
    a=PI*n*n;
    return a;
}

float circum(float n){
    float PI=22/7,c;
    c=2*PI*n;
    return c;
}