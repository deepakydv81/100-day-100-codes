#include <stdio.h>

int main(){
/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1   : 3
Output 1  : 9

Input 2   : 5
Output 2  : 25  */
    int n;
    printf("enter the value of n : \n");
    scanf("%d",&n);
    int sum = 0;
    for (int i =1; i <=n; i= i+2)
    {
        sum = sum + i; 
    }
    printf("sum of odd numbers till n = %d \n",sum);

/*Q28: Write a program to print the product of even numbers from 1 to x.
Sample Test Cases:
Input 1    :   4
Output 1   :   8 (2 * 4)

Input 2    :   6
Output 2   :   48 (2 * 4 * 6)   */
    int x;
    printf("enter the value of x : \n");
    scanf("%d",&x);
    int pro = 1;
    for (int i =2; i <=x; i= i+2)
    {
        pro = pro*i ;
    }
    printf(" product of even numbers till z %d \n", pro);
    return 0;
}