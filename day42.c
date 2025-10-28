#include <stdio.h>

int main(){
/*Q83: Count vowels and consonants in a string.
Sample Test Cases:
Input 1  : hello
Output 1 :
Vowels=2 , Consonants=3  */
    
    char str1[100];
    printf("enter the string\n");
    scanf("%s",&str1);
    int vowels = 0 ,consonants = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if ( 'a' == str1[i] || 'e' == str1[i] ||
        'i' == str1[i] || 'o' == str1[i] ||
        'u' == str1[i]
       ) {vowels++;}
    else
        consonants++;
    }
    printf("vowels = %d\n",vowels);
    printf("consonant = %d\n",consonants);



    

/*Q84: Convert a lowercase string to uppercase without using built-in functions.
Sample Test Cases:
Input 1  : hello
Output 1 : HELLO */

    char str[100];
    printf("Enter  lowercase string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    printf("Uppercase: %s\n", str);
    return 0;
}