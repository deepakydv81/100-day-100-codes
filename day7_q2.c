#include <stdio.h>

int main(){

    /*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1 : a
Output 1 : Vowel

Input 2 : b
Output 2 : Consonant*/
    char ch;
    printf("enter the alphabet \n");
    scanf("%c",&ch);
    if ( 'a' == ch || 'e' == ch ||
         'i' == ch || 'o' == ch ||
         'u' == ch
       )
    printf("it is a vowel \n");
    else
    printf("it is a consonant");    
    return 0;
}