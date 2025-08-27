#include <stdio.h>

int main(){
/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.
Sample Test Cases:

Input 1 :  7
Output 1 :  7 is odd

Input 2 :  12
Output 2 :  12 is even  */
    
    int num;
    printf("enter the num = \n");
    scanf("%d",&num);

    if (num%2 == 0)
     printf("num is even \n ");
    
    else 
     printf("num is odd \n ");

    
 /*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:

Input 1 : -5
Output 1 : Negative

Input 2 : 0
Output 2 : Zero

Input 3 : 10
Output 3 : Positive*/

int number;
printf("enter the number \n ");
scanf("%d",&number);

if (number > 0)
printf("number is positive \n");

else if (number < 0)
printf("number is negative \n");

else if (number == 0)
printf("number is zero \n");

else
printf("it is not a natural number");

    return 0;
}