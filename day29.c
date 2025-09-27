#include <stdio.h>

int main(){
/*Q57: Find the sum of array elements.
Sample Test Cases:
Input 1  : 4                Input 2  : 3
2 4 6 8                     1 1 1
Output 1 :  20              Output 2  :  3*/
    int n;
    printf("enter the total values :\n");
    scanf("%d",&n);

    int num[n];
    int sum = 0;

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0 ; i < n ; i++)
    {
        printf(" %d ",num[i]);
        sum = sum + num[i];
    }
    printf(" \n %d \n",sum);

/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1  : 5               Input 2  : 3
2 9 1 4 7                  10 10 10
Output 1:                  Output 2:
Max=9, Min=1               Max=10, Min=10  */

   int x;
    printf("enter the total values :\n");
    scanf("%d",&x);

    int digits[x];

    for (int i = 0 ; i < x ; i++)
    {
        scanf("%d",&digits[i]);
    }

    int mini = digits[0], max = digits[0];
    for (int i = 0 ; i < x ; i++)
    {
        printf(" %d ",digits[i]);
        if ( digits[i] < mini)
        { mini = digits[i]; }
        if ( digits[i] > max)
        { max = digits[i];}
    } 
    printf("\n minimum = %d \n", mini);
    printf("maximum = %d \n", max);
    return 0;
}