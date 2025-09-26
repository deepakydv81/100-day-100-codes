#include <stdio.h>

int main(){
   //Q1
    int n;
    printf("enter the value of n. \n");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        int prime = 1;
        for (int j = 2; j < i; j++)
        {
        if (i%j == 0)
        {
            prime = 0;
            break;
        }
        }
    if (prime == 1)
    {
        printf(" %d",i);
    }
    }

    int x;
    printf("\n enter the x \n");
    scanf("%d",&x);

    int arr[x];

    for ( int i = 0; i < x ; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    for ( int i = 0; i < x ; i++)
    {
        printf(" %d ",arr[i]);
    }
    
    return 0;
}