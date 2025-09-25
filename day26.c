#include <stdio.h>

int main(){
int i,j,num=1;
// Q1
for ( i = 1 ; i <= 5 ; i++)
    {
        for ( j = 1; j <= 5 - i ; j++)
        {
            printf(" ");
        }
        
        for ( j = 5 - i ; j <= 5 ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

//q2
for ( i = 1 ; i <=5 ; i +=2)
{
    for ( j = 1 ; j <= i ; j +=1)
    {
        printf("*\n");
    }
    printf("\n");
}
for ( i = 3; i >= 1 ; i-=2)
{
    for ( j = 1 ; j <= i ; j++)
    {
        printf("*\n");
    }
    printf("\n");
}

return 0;
}