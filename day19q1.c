#include <stdio.h>

int main(){
/*Q37: Write a program to find the LCM of two numbers.
Sample Test Cases:
Input 1  : 4 5
Output 1 : 20

Input 2  : 7 3
Output 2 : 21      */
    int a,b;
    printf("enter the value of a : \n");
    scanf("%d",&a);
    printf("enter the value of b : \n");
    scanf("%d",&b);
    int ab = a*b;
    int pro;
    while (b != 0)
    {
        pro=b;
        b = a % b;
        a = pro;
    }

    printf("LCM of a&b = %d",ab/a);
    

    return 0;
}