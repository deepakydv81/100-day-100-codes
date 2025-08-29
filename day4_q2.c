#include <stdio.h>

int main(){

/*Q8: Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:

Input 1 : 5
Output 1  : Sum=15

Input 2 : 10
Output 2 : Sum=55  */
    int n;
    printf("enter the value of 'n' \n");
    scanf("%d",&n);
    printf("sum of first n number = %d \n",(n*(n+1))/2);


    return 0;
}
