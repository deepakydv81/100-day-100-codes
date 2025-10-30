#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1  : programming
g
Output 1 : 2 */
    char str1[100];
    printf("enter the string \n");
    gets(str1);

    char freq;
    printf("enter the character \n");
    scanf("%c",&freq);

    int count=0;
    
    for(int i = 0; str1[i] != '\0'; i++) {
        if (str1[i]==freq)
        {
            count++;
        }
    }
    printf("the frequency is eqals to %d\n",count);
    

/*Q90: Toggle case of each character in a string.
Sample Test Cases:
Input 1  : Hello
Output 1 : hELLO  */
    char str2[100];
    printf("enter the string\n");
    gets(str2);

    for (int i = 0; str2[i] != '\0' ; i++)
    {
        if (islower(str2[i]))
        {
            str2[i] = toupper(str2[i]);
        }
        else if (isupper(str2[i]))
        {
            str2[i] = tolower(str2[i]);
        }
    }
    
    printf("%s",str2);
    

    return 0;
}