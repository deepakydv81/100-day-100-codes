#include <stdio.h>

int main(){
/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1  : 4
10 20 30 40
2 15
Output 1 : 10 20 15 30 40 */

    int N;
    printf("enter size of 1st array :\n");
    scanf("%d",&N);

    int arr1[N];
    printf("enter values of arrray\n");
    for (int i = 0; i < N ; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int pos1;
    printf("enter position \n");
    scanf("%d",&pos1);

    int num;
    printf("enter number that you want to enter \n");
    scanf("%d",&num);

    for (int  i = N ; i > pos1 ; i--)
    {
        arr1[i] = arr1[i-1];
    }
    arr1[pos1] = num;
    N++;

    for (int i = 0; i < N ; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1  : 5
1 2 3 4 5
2
Output 1 : 1 2 4 5 */

    int n;
    printf("enter size of 2nd array :\n");
    scanf("%d",&n);

    int arr2[n];
    printf("enter values of arrray\n");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    int pos;
    printf("enter element you want to delete :\n");
    scanf("%d",&pos);

    for (int i = pos ; i < n-1; i++)
    {
        arr2[i] == arr2[i+1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ",arr2[i]);
    }
    

    return 0;
}