#include <stdio.h>

int main(){
/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1  : 5
10 20 30 40 50
Output 1 : 40 */

    int n1;
    printf("enter the size of 1st array :\n");
    scanf("%d",&n1);

    int arr1[n1];
    printf("enter the values of array :\n");

    for (int i = 0; i < n1 ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int largest = arr1[0], second_largest;

    for (int i = 0; i < n1; i++)
    {
        if (largest < arr1[i])
        {
            largest = arr1[i];
            second_largest = arr1[i-1];
        }
        
    }
    printf("%d \n",second_largest);   

/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1  : 5
1 2 3 4 5
2
Output 1 : 4 5 1 2 3  */

    int n2;
    printf("enter size of 2nd array :\n");
    scanf("%d",&n2);

    int arr2[n2];
    printf("enter values of 2nd array :\n");

    for (int i = 0; i < n2 ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int k,pos;
    printf("enter the value of K \n");
    scanf("%d",&k);

    for (int j = 0; j < k ; j++)
    {
        pos = arr2[n2 - 1];
        for (int i = n2-1 ; i > 0 ; i--)
        {
            arr2[i] = arr2[ i - 1 ];
        }
        arr2[0] = pos;
    }
    for (int i = 0; i < n2 ; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    return 0;
}