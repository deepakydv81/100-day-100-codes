#include <stdio.h>

int main(){
/*Q73: Find the sum of each row of a matrix and store it in an array.
Sample Test Cases:
Input 1  : 2 3
1 2 3
4 5 6
Output 1 : 6 15  */
    int x,y;
    printf("enter the rows & coloumn of 2D array :\n");
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
    int rowsum[x]; // = 0,sum2=0;
    for (int i = 0 ; i < x; i++)
    {   rowsum[i] = 0;
        for (int j = 0; j < y; j++)
        {
            rowsum[i] = rowsum[i] +arr1[i][j];
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d ", rowsum[i]);
    }
    printf("\n");
    

/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1 : 2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6 */
    int X,Y;
    printf("enter the rows & coloumn of 2D array :\n");
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
    
    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < X ; j++)
        {
            printf("%d ", arr2[j][i]);
        }
    printf("\n");
    }

    return 0;
}