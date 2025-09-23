#include <stdio.h>

int main(){
int i,j,num=1;
// Q1
for ( i = 5 ; i >= 1 ; i--)
    {
        for ( j = i ; j <= 5 ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

printf("   \n");
//Q2
for ( i = 1 ; i <=5; i++)
{
    for ( j = i ; j <=5 ; j++)
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}