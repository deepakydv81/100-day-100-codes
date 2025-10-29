#include <stdio.h>
#include <string.h>

int main(){

/*Q85: Reverse a string.
Sample Test Cases:
Input 1  : abcd
Output 1 : dcba  */ 
   char str1[100];
    printf("enter the string\n");
    scanf("%s",&str1);
    int len1 = strlen(str1);
    printf("Reversed string ");
    for(int i = len1 - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");  

    return 0;
}