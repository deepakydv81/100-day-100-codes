#include <stdio.h>
#include <math.h>

int main(){
/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1  : 153
Output 1 : Armstrong

Input 2  : 123
Output 2 : Not Armstrong  */
int x;
printf("enter the value of x \n");
scanf("%d",&x);
int sum=0;
int digits = log10(x) + 1;
int save = x;
while (save)
{
    int i = save %10;
    sum = sum + pow(i,digits);
    save = save/10;
}
if (sum==x)
{
    printf("it is a palindrome no.");
}
else
printf("it is not an palindrome no");

/*Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1    : 7
Output 1   : Prime

Input 2    : 10
Output 2   : Not prime*/
int n;
printf("enter the value of n \n");
scanf("%d",&n);
int prime = 1;
for (int i = 2; i<=n / 2 ; i++)
{
    if (n%i == 0)
    {
        prime = 0;
        break;
    }
    

}
if (prime)
{
    printf("num i s prime \n ");
}
else
printf("is not prime \n");


    return 0;
}