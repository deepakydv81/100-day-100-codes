#include <stdio.h>

int main(){
/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1  :   3661
Output 1 :   1:1:1

Input 2  :   7322
Output 2 :   2:2:2*/
    int total_seconds;
    printf("enter time in seconds \n");
    scanf("%d",&total_seconds);
    int hours = total_seconds/3600 ;
    int minutes = (total_seconds%3600)/60;
    int seconds = (total_seconds%60);
    printf("%d:%d:%d \n ", hours,minutes,seconds);
    return 0;
}