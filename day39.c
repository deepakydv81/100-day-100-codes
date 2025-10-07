#include <stdio.h>

int main(){
/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1  : 3 3                  Input 2  : 3 3
1 2 3                           1 2 3
4 5 6                           4 5 6
7 8 1                           7 8 9
Output 1 :False                 Output 2 : True  */
    int x,y;
    printf("enter the rows & coloumn of 1st matrix :\n");
    scanf("%d %d",&x,&y);

    int arr1[x][y];
    printf("enter the values of 1st matrix :\n");
    for (int i = 0; i < x ; i++)
    {
        for (int j = 0; j < y ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    int distinct =1;
    for ( int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (arr1[i][i] == arr1[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0)
            break;
    }

    if (distinct == 1)
        printf("True\n");
    else
        printf("False\n");

/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1  : 3 3
1 2 3
4 5 6
7 8 9
Output 1 : 15  */
    int a,b;
    printf("Enter rows & coloumns of the 2nd matrix : \n");
    scanf("%d %d",&a,&b);

    int arr2[a][b];
    printf("enter values of 2nd matrix :\n");
    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==j)
            {
                sum = sum + arr2[i][j];
            }
        }
    }
    printf("sum of main diagonol = %d",sum);
    return 0;
}