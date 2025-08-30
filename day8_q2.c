#include <stdio.h>

int main(){
/*Q16: Write a program to input three numbers and find the largest among them using if–else.
Sample Test Cases:

Input 1:3 7 5
Output 1:Largest is 7

Input 2:-1 -5 0
Output 2:Largest is 0*/
    int num1,num2,num3;
    printf("enter the first number \n ");
    scanf("%d",&num1);
    printf("enter the second number \n ");
    scanf("%d",&num2);
    printf("enter the third number \n ");
    scanf("%d",&num3);

    if (num1>num2&&num1>num3)
    {
      printf("first number is greater among all \n",num1);
    }
    else if (num2>num1&&num2>num3)
    {
      printf("second number is greater among all \n ",num2);
    }
    else if (num3>num1&&num3>num2)
    {
      printf("third number is greater among all \n",num3);
    }
    else
    printf("incorrect input \n");
    
    
    return 0;
}