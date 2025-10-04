#include <stdio.h>

int main(){

/*Q71: Read and print a matrix.
Sample Test Cases:
Input 1  : 2 2
1 2
3 4
Output 1 :
1 2
3 4  */

    int A,B;
    printf("enter the rows & coloumn of array :\n");
    scanf("%d %d",&A,&B);

    int arr1[A][B];

    printf("enter values of 1st 2D array \n");
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &arr1[i][j]);
        }  
    }
    printf("\n");
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1  : 2 3
1 2 3
4 5 6
Output 1 : 21 */

    int a,b;
    printf("enter the rows & coloumn of array :\n");
    scanf("%d %d",&a,&b);

    int arr2[a][b];

    printf("enter values of 2nd 2D array \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr2[i][j]);
        }  
    }

    int x;
    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            x = arr2[i][j];
            sum = sum + x; 
        }
        printf("\n");
    }
    printf(" sum of all elements %d \n",sum);
    
    return 0;
}