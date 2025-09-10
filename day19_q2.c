#include <stdio.h>

int main(){
/*Q38: Write a program to find the sum of digits of a number.
Sample Test Cases:
Input 1  : 123
Output 1 : 6

Input 2  : 999
Output 2 : 27  */
int num;
printf("enter the number \n ");
scanf("%d",&num);
int sum=0;
int digits;
int save = num;
while (save>0)
{
    digits = save %10;
    sum += digits;
    save = save/10;
}
printf(" sum of digits of numbers %d ",sum);
    return 0;
}