#include <stdio.h>

int main(){
/*Q63: Merge two arrays.
Sample Test Cases:
Input 1  : 3      2 
1 2 3            4 5

Output 1 : 1 2 3 4 5   */

    int x;
    printf("Enter size of 1st array :\n");
    scanf("%d",&x);
    int n;
    printf("enter size of 2nd array :\n");
    scanf("%d",&n);
    
    int arr1[x];
    printf("enter the values of 1st array :\n");

    for (int i = 0; i < x ; i++)
    { 
        scanf("%d",&arr1[i]); 
    }


    int arr2[n];
    printf("enter the values of 2nd array :\n");

    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merg[x + n];

    for (int i = 0; i < x ; i++)
    {
        merg[i] = arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        merg[x + j] = arr2[j];
    }
    printf("\n");
    for (int i = 0; i < x + n ; i++)
    {
        printf(" %d ",merg[i]);
    }
    

/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1  : 112233              Input 2  : 887799
Output 1 : 1                   Output 2 : 7  */
    int num, digit, maxDigit = 0, maxCount = 0;
    int counts[10] = {0};

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Count the frequency of each digit
    int temp = num;
    // Handle the case when num is 0
    if (temp == 0) {
        counts[0] = 1;
    } else {
        while (temp != 0) {
            digit = temp % 10;
            counts[digit]++;
            temp /= 10;
        }
    }

    // Find the digit with maximum occurrence (smallest if tie)
    for (digit = 0; digit < 10; digit++) {
        if (counts[digit] > maxCount) {
            maxCount = counts[digit];
            maxDigit = digit;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    return 0;
}
