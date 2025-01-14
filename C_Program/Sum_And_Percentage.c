/*1.WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.*/
#include<stdio.h>
void main(){
    int a, b, c, d, e, s; 
    float p;
    printf("Enter mark of 1st Subject  ");
    scanf("%d",&a);
    printf("Enter mark of 2nd Subject  ");
    scanf("%d",&b);
    printf("Enter mark of 3rd Subject  ");
    scanf("%d",&c);
    printf("Enter mark of 4th Subject  ");
    scanf("%d",&d);
    printf("Enter mark of 5th Subject  ");
    scanf("%d",&e);
    s = a+b+c+d+e;
    p = s/5;
    printf("\n Sum total mark of all subject is %d",s);
    printf("\n Percentage secured is %f",p);
}