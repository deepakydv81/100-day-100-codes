#include <stdio.h>

int main(){
/*Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1  : 10
Output 1 : 1010

Input 2  : 7
Output 2 : 111  */
int n;
printf("enter the number \n");
scanf("%d",&n);
int binary=0;
int rem,place=1;
while (n>0)
{
    rem = n % 2;
    binary= binary + rem*place;
    place*=10;
    n = n / 2;

}
printf("binary represent %d ", binary);




    return 0;
}