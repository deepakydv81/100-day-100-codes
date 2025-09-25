#include <stdio.h>

int main(){
    int i,j;

//Q1
    for ( i = 1 ; i <=9 ; i +=2)
{
    for ( j = 1 ; j <= i ; j +=1)
    {
        printf("*");
    }
    printf("\n");
}
for ( i = 7; i >= 1 ; i-=2)
{
    for ( j = 1 ; j <= i ; j++)
    {
        printf("*");
    }
    printf("\n");
}

printf("\n");

//Q2
for ( i = 1 ; i <= 4 ; i++)
    {
        for ( j = 1; j <= 4 - i ; j++)
        {
            printf(" ");
        }
        
        for ( j = 1 ; j <= 2*i - 1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
for ( i = 3 ; i >= 1 ; i--)
    {
        for ( j = 1; j <= 4 - i ; j++)
        {
            printf(" ");
        }
        
        for ( j = 1 ; j <= 2*i - 1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}