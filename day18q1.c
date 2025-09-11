#include <stdio.h>

int main(){
/*Q35: Write a program to print all factors of a given number.
Sample Test Cases:
Input 1  : 6                           Input 2  : 10
Output 1 :   1 2 3 6                   Output 2 : 1 2 5 10*/
int num;
printf("enter the  number : \n ");
scanf("%d",&num);
printf("Factors :");

for ( int i = 1 ; i < num ; i++ )
{
    if ( num % i == 0)
    {
        printf(" %d ", i);
    } 
}

    return 0;
}