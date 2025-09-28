#include <stdio.h>
int main() {
/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1  : 6                   Input 2  : 4
1 2 3 4 5 6                    2 4 6 8
Output 1 :                     Output 2:
Even=3, Odd=3                  Even=4, Odd=0 */
    int n;
    printf("enter the total values : \n");
    scanf("%d",&n);

    int num[n];

    printf("enter the numbers:\n");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    int odd = 0,even = 0;
    for (int i = 0; i < n ; i++)
    {
        printf(" %d ",num[i]);
        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;

    }
    printf("\n odd = %d \n",odd);
    printf("even = %d \n",even);

/*Q60: Count positive, negative, and zero elements in an array.
Sample Test Cases:
Input 1  : 5
-1 0 1 2 -2
Output 1 :
Positive=2, Negative=2, Zero=1  */
    int x;
    printf("enter the total values : \n");
    scanf("%d",&x);

    int digits[x];

    printf("enter the numbers:\n");
    for (int i = 0; i < x ; i++)
    {
        scanf("%d",&digits[i]);
    }
    int positive = 0, negative  = 0,zero=0;
    for (int i = 0; i < x ; i++)
    {
        printf(" %d ",digits[i]);
        if (digits[i] > 0)
        {
            positive++;
        }
        else if (digits[i] < 0)
        {
            negative++;
        }
        else
            zero++;
    }
    printf("\n positive = %d \n",positive);
    printf("\n negative = %d \n",negative);
    printf("\n zero = %d \n",zero);

    return 0;
}