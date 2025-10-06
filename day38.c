#include <stdio.h>

int main(){
/*Q75: Add two matrices.
Sample Test Cases:
Input 1  : 2 2
1 2
3 4
           2 2
5 6
7 8
Output 1 :
6 8
10 12 */
    int x,y;
    printf("enter the rows & coloumn of 1st 2D array :\n");
    scanf("%d %d",&x,&y);

    int arr1[x][y];
    printf("enter the values of 1st array :\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y ; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    int X,Y;
    printf("enter the rows & coloumn of 2nd 2D array :\n");
    scanf("%d %d",&X,&Y);

    int arr2[X][Y];
    printf("enter the values of 2nd array :\n");

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y ; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[5][5];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y ; j++)
        {   
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y ; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1  : 2 2                 Input 2  : 2 2
1 2                            1 0
2 1                            2 1
Output 1 : True                Output 2 : False*/
    int a,b;
    printf("enter the rows & coloumn of 2D matrix :");
    scanf("%d %d",&a,&b);

    int arr3[a][b];
    printf("enter the values of 2D array :\n");

    for (int i = 0; i < a; i++)
    {
       for (int j = 0 ; j < b ; j++)
       {
            scanf("%d",&arr3[i][j]);
       }
    }

    int flag = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr3[i][j] != arr3[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag = 1)
    {
        printf("True");
    }
    else
        printf("False");
    
    return 0;
}