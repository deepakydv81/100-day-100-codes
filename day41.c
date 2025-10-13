#include <stdio.h>

int main(){
/*Q81: Count characters in a string without using built-in length functions.
Sample Test Cases:
Input 1  : Hello                Input 2  :  
Output 1 : 5                    Output 2 : 1  */

    char str1[50];
    printf("enter the string \n");
    scanf("%s",str1);
    int count = 0;

    while (str1[count] != '\0')
    {
        count++;
    }
    printf("%d \n",count); 

/*Q82: Print each character of a string on a new line.
Sample Test Cases:
Input 1  : Hi
Output 1 :
H
i  */
    char str2[50];
    printf("enter the string \n");
    scanf("%s",str2);

    for (int i = 0; str2[i] != '\0' ; i++)
    {
        printf("%c",str2[i]);
        printf("\n");
    }
    

    return 0;
}