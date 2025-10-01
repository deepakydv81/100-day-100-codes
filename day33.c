#include <stdio.h>

int main(){
/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1  : 5                        Input 2  : 5
1 3 5 7 9                           1 3 5 7 9
7                                   6
Output 1 : Found at index 3         Output 2 : -1  */
    int n, num;
    printf("enter size of 1st array :\n");
    scanf("%d", &n);

    int arr1[n];
    printf("enter values of 1st array :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("enter number that you want to find :\n");
    scanf("%d", &num);

    int low = 0, high = n - 1, mid, result = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr1[mid] == num) {
            result = mid;
            break;
        }
        else if (arr1[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");


/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1  : 5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6  */

    int n1,number,pos;

    printf("enter size of 2nd array :\n");
    scanf("%d",&n1);

    int arr[n+1];

    printf("enter values of 2nd array :\n");
    for ( int i = 0; i < n1 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter new value that you want to enter :\n");
    scanf("%d",&number);

    pos=n;
    for (int i = 0 ; i < n; i++)
    {
        if (arr[i] > number)
        {
            pos=i;
            break;
        } 
    }
    
    for (int i = n1; i > pos ; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = number;
    n1++;

    for ( int i = 0; i < n1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}