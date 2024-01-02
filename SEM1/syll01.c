// to get marks in 5 subjects and print the sum and percentage.

#include<stdio.h>
#include<conio.h>

float sum(float n1, float n2, float n3, float n4, float n5);
float per(float n);
int main (){
    float m1,m2,m3,m4,m5;
    float s,p;
    AG1:
    printf("Enter your marks in the first subject:\t");
    scanf("%f",&m1);
    if(m1>100 || m1<0 ) goto AG1;

    AG2:
    printf("Enter your marks in the second subject:\t");
    scanf("%f",&m2);
    if(m2>100 || m2<0 ) goto AG2;
    
    AG3:
    printf("Enter your marks in the third subject:\t");
    scanf("%f",&m3);
    if(m3>100 || m3<0 ) goto AG3;

    AG4:
    printf("Enter your marks in the fourth  subject:\t");
    scanf("%f",&m4);
    if(m4>100 || m4<0 ) goto AG4;

    AG5:
    printf("Enter your marks in the fifth subject:\t");
    scanf("%f",&m5);
    if(m5>100 || m5<0 ) goto AG5;

//sum of marks 
   // sum=m1+m2+m3+m4+m5;
   // printf("you have scored total %f marks out of 500.\n",sum);
 s=sum(m1,m2,m3,m4,m5);
 printf("the sum is %.2f",s);

// percentage
    // p=s/5;
    // printf("you have scored %f percents.",p);
    p=per(s);
    printf("the percentage is %.2f",p);

return 0;
}

float sum(float n1, float n2, float n3, float n4, float n5){
    float total;
    total=n1+n2+n3+n4+n5;
    return total;
}

float per(float n){
    float perc;
    perc=n/5;
    return perc;
}