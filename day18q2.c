#include <stdio.h>

int main(){

/*Q36: Write a program to find the HCF (GCD) of two numbers.
Sample Test Cases:
Input 1  : 12 18
Output 1 : 6

Input 2  :  7 9
Output 2 : 1  */
    int a,b;
    printf("enter the value of a : \n");
    scanf("%d",&a);
    printf("enter the value of b : \n");
    scanf("%d",&b);
    int pro;
    while (b != 0)
    {
        pro=b;
        b = a % b;
        a = pro;
    }
    printf("hcf of a&b = %d",a);


    return 0;
}