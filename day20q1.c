#include <stdio.h>

int main() {
/*Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1  : 12345               Input 2  : 2468
Output 1 : 15 (1*3*5)          Output 2 :  1 (no odd digits, assume 1)   */

    int n;
    printf("enter the number . \n");
    scanf("%d",&n);
    int pro = 1;
    int digits;
    while (n != 0)
    {
        digits=n%10;
        if (digits%2 != 0)
        {
            pro=pro*digits;
        }
         n=n/10;
    }
    printf("product of odd digits : %d \n",pro); 
    return 0; 
    }
    



