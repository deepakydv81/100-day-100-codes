#include <stdio.h>

int main(){
/*Q29: Write a program to calculate the factorial of a number.
Sample Test Cases:
Input 1  :  5
Output 1 :  120

Input 2  :  3
Output 2 :  6  */
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    int pro = 1;
    for ( int i = 1; i<=n; i++)
    {
        pro = pro*i;
    }
    printf(" factorial of n %d \n", pro);


    return 0;
}