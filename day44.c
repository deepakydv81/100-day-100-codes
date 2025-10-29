#include <stdio.h>
#include <string.h>

int main(){
/*Q87: Count spaces, digits, and special characters in a string.
Sample Test Cases :
Input 1  : a b1&2
Output 1 :
Spaces=1, Digits=2, Special=1  */

    char str1[100];
    printf("enter the string \n");
    gets(str1);

    int spaces=0,special=0;
    int len1 = strlen(str1);

    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == ' ')
            spaces++;
        else if (str1[i] == '!' || str1[i] == '@'|| str1[i] == '#'
            || str1[i] == '$' || str1[i] == '%' || str1[i] == '^' 
            || str1[i] == '&'|| str1[i] == '*')
        {   special++;   }
    }
    printf("total spaces %d \n",spaces);
    printf("total special characters %d \n",special);


/*Q88: Replace spaces with hyphens in a string.
Sample Test Cases :
Input 1  : hello world
Output 1 : hello-world */

    char str2[100];
    printf("enter the string \n");
    gets(str2);
    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == ' '){
            str2[i] = '-';
        }
    }
    printf("%s\n",str2);

    return 0;
}