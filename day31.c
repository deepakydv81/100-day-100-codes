#include <stdio.h>

int main(){
/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1  : 5                              Input 2 : 4
1 2 3 4 5                                 10 20 30 40
3                                         25
Output 1 : Found at index 2               Output 2 : -1*/
    int x;
    int nothing=0;
    printf("enter the total values : \n");
    scanf("%d",&x);

    int digits[x];

    printf("enter the numbers:\n");
    for (int i = 0; i < x ; i++)
    {
        scanf("%d",&digits[i]);
    }

    int found;
    printf("enter number that you want to find :\n");
    scanf("%d",&found);

    for (int i = 0; i < x ; i++)
    {
       if (found == digits[i])
        {
            printf("found at index %d \n", i+1);
            nothing=1;
            break;
        } 
    }
    if ( nothing==0 )
    {
        printf("number not found...\n");
    }
    

/*Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1  : 4
1 2 3 4
Output 1:
4 3 2 1
*/
    int n;
    printf("enter the total values : \n");
    scanf("%d",&n);

    int num[n];

    printf("enter the numbers:\n");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        printf(" %d ", num[i]);
    }
    return 0;
}