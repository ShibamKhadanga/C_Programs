/*2.WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest 
and Time are entered through the keyboard.*/
#include<stdio.h>
#include<math.h>
void main(){
    int p, r, t;
    float s, c;
    printf("Enter Principal amount  ");
    scanf("%d",&p);
    printf("Enter Rate of Interest  ");
    scanf("%d",&r);
    printf("Enter Time period  ");
    scanf("%d",&t);
    s = (p*r*t)/100;
    c = ((p*(pow((100+(r/100)),t)))-p);
    printf("\nSimple interest is %f",s);
    printf("\nCompound interest is %f",c);
}