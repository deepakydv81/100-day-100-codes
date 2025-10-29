#include <stdio.h>
#include <string.h>

int main(){
/*Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1  : madam                 Input 2  : hello
Output 1 : Palindrome            Output 2 : Not palindrome  */

    char str2[100];
    int len, rev = 0;

    printf("Enter a string:\n");
    gets(str2);   

    len = strlen(str2);

    for(int i = 0; i < len ; i++) {
        if(str2[i] != str2[len - i - 1]) {
            rev = 1;
            break;
        }
    }

    if(rev == 0)
        printf("string is palindrome.\n");
    else
        printf("string is not palindrome.\n");



    return 0;
}