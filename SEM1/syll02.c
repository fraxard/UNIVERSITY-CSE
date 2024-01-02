// SI & CI

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (){
    float pa,rate,tp,am,si,ci;
    printf("Enter the principal amount:\t");
    scanf("%f",&pa);

    printf("Enter the interest rate :\t");
    scanf("%f",&rate);

    printf("Enter the time period of loan :\t");
    scanf("%f",&tp);

    si=(pa*rate*tp)/100;
    am=pa+si;
    printf("for the simple interest , the total amount is %f, after adding the interest of %f.\n",am,si);

    // CI = P(1+ r/100 )^t - P
    float exp,exp2;                                          // exp is the expression for the formula of ci
    exp=(1+rate/100);
    exp2=pow(exp,tp);
    ci=(pa*exp2) - pa ;
    am=pa+ci;
    printf("for the compund interest , the total amount is %f, after adding the interesrt of %f.\n",am,ci);

    return 0;

}