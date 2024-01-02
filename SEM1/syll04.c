// change the temperature units

#include<stdio.h>
#include<conio.h>

float faren(float n);
float main(){
    float  cel,far;
    printf("Enter the temperature in degree CELSIUS :\t");
    scanf("%f",&cel);

    // EASY METHOD
    // far=(cel * 1.8) + 32;
    // printf("The temperature in equivalent Farenheit scale is %f degrees F.\n",far);

    printf("%.2f degrees Celsius = %.2f degrees Farenheit",cel,faren(cel));

    return 0;
}

float faren(float n){
    float f;
    f=(n * 1.8) + 32;
    return f;
}