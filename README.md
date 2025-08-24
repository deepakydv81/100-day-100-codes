# 100-day-100-codes
DAY 1

#include <stdio.h>
/*
Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:

Input 1 : 3&4
Output 1 : Sum = 7

Input 2 : -1 20
Output 2 : Sum = 19
*/
int main(){
    int x;
    printf("enter the value of x = \n");
    scanf("%d",&x);
    int y; 
    printf("enter the value of y = \n");
    scanf("%d",&y);
    printf("sum of x&y %d \n",x+y);

    return 0;
}


Q
#include <stdio.h>
/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1 : 10 2
Output 1 : Sum=12, Diff=8, Product=20, Quotient=5

Input 2 : 7&3
Output 2 : Sum=10, Diff=4, Product=21, Quotient=2
*/
int main(){
    int x;
    printf("enter the value of x = \n");
    scanf("%d",&x);

    int y;
    printf("enter the value of y = \n");
    scanf("%d",&y);
    printf("sum %d \n",x+y);
    printf("difference %d \n",x-y);
    printf("product %d \n",x*y);
    printf("quotient %d \n",x/y);

    return 0;
}


