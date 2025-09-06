#include <stdio.h>

int main(){
    int x,z;
    printf("enter the number");
    scanf("%d",&x);

    while(x>0){

        z=x%10;
        printf("%d",z);
        x=x/10;
    }

    return 0;
}