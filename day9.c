#include <stdio.h>

int main(){
    
/*Q17: Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1 : 1 -3 2
Output 1 : Roots are real and different: 2, 1

Input 2 : 1 -2 1
Output 2 : Roots are real and same: 1

Input 3 : 1 2 5
Output 3 : Roots are complex*/
    printf("ax^2 + bx + c \n ");
    int coeff_1 , coeff_2 , coeff_3 ;
    printf("enter the value of a \n ");
    scanf("%d",&coeff_1);
    printf("enter the value of b \n ");
    scanf("%d",&coeff_2);
    printf("enter the value of c \n ");
    scanf("%d",&coeff_3);
    printf(" 1st root of equation %d \n", ((-coeff_2+((coeff_2*coeff_2) -4*coeff_1*coeff_3)^(1/2))/2*coeff_1));
    printf(" 2nd root of equation %d \n", ((-coeff_2-((coeff_2*coeff_2) -4*coeff_1*coeff_3)^(1/2))/2*coeff_1));
    int d = (coeff_2*coeff_2)-4*coeff_1*coeff_3;
    if (d>0)
    printf("two distinct real roots \n");
    else if (d==0)
    printf("two equal real roots \n ");
    else if (d<0)
    printf("complex roots \n");
    else
    printf("incorrect input \n ");
    
    


/*Q18: Write a program to assign grades based on a percentage input.
Sample Test Cases:
Input 1 : 95
Output 1 : Grade A

Input 2 : 82
Output 2  : Grade B

Input 3 :  68
Output 3 :  Grade D

Input 4 :  50
Output 4 :  Grade F*/

    int percentage;
    printf("enter your percentage \n");
    scanf("%d",&percentage);

    if (percentage>=95)
    printf("grade A");

    else if (percentage>=82)
    printf("grade B"); 

    else if (percentage>=68)
    printf("grade D"); 
    else  
        printf("grade F");
    
    return 0;
}