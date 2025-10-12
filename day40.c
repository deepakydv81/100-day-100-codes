#include <stdio.h>

int main(){
/*Q79: Perform diagonal traversal of a matrix.
Sample Test Cases:
Input 1  :   3 3
1 2 3
4 5 6
7 8 9
Output 1 :   1 2 4 7 5 3 6 8 9 */
    int x,y;
    printf("Enter the rows & coloumns of 2D matrix :\n");
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
    for (int i = 0; i < x ; i++)
    {
        for (int j = 0; j < y ; j++)
        {
            printf("%d ",arr1[i][j]);
        }
    }
    printf("\n");
    

/*Q80: Multiply two matrices.
Sample Test Cases:
Input 1  : 2 3     &       3 2

1 2 3                     7 8
4 5 6                     9 10
                          11 12

Output 1 :
58 64
139 154 */
    printf("1st array \n");
    int a,b;
    printf("Enter the rows & coloumns of 2D matrix :\n");
    scanf("%d %d",&a,&b);

    int arr2[a][b];
    printf("enter the values of 1st matrix :\n");
    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n2nd array \n");
    int A,B;
    printf("Enter the rows & coloumns of 2D matrix :\n");
    scanf("%d %d",&A,&B);

    int arr3[A][B];
    printf("enter the values of 2nd matrix :\n");
    for (int i = 0; i < A ; i++)
    {
        for (int j = 0; j < B ; j++)
        {
            scanf("%d",&arr3[i][j]);
        }
    }


    int result[a][B];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < B; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < B; j++) {
            for (int k = 0; k < b; k++) {
                result[i][j] += arr2[i][k] * arr3[k][j];
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < B; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}