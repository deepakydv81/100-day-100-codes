#include <stdio.h>

int main(){
/*Q23: Write a program to calculate a library fine based on late days.
Sample Test Cases:

Input 1 : 4
Output 1 :  Fine ₹8

Input 2  :  8
Output 2  : Fine ₹32

Input 3 : 15
Output 3  : Fine ₹90

Input 4  :  31
Output 4  :  Membership Cancelled
*/
    int late_days;
    printf("enter the late days \n");
    scanf("%d",&late_days);
    if (late_days<=5)
    {
        printf("Fine : %d \n",late_days*2);
    }
    else if (late_days<=10)
    {
        printf("Fine : %d \n",late_days*4);
    }
    else if (late_days<=30)
    {
        printf("Fine : %d \n",late_days*6);
    }
    else if (late_days>30)
    {
        printf("Membership cancelled");
    }
    

/*Q24: Write a program to calculate an electricity bill based on units consumed.
Sample Test Cases:

Input 1  :  50
Output 1 :  Bill: ₹250     

Input 2  :  150
Output 2 :  Bill: ₹950     

Input 3  : 250
Output 3 :  Bill: ₹2200   */
    int units;
    printf("enter the units consumed \n");
    scanf("%d",&units);
    if (units<=50)
    {
        printf("electricity bill : %d \n",units*5);
    }
    else if (units<=150)
    {
        printf("electricity bill : %f \n",units*6.34);
    }
    else if (units>150)
    {
        printf("eectricity bill : %f \n",units*8.8);
    }
    
    return 0;
}