#include <stdio.h>

int main(){

/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1 : 3 3 3
Output 1 : Equilateral

Input 2 : 3 3 4
Output 2 : Isosceles

Input 3 : 2 3 4
Output 3 : Scalene*/

    int side_1;
    printf("enter the value of side1 \n");
    scanf("%d",&side_1);
    int side_2;
    printf("enter the value of side2 \n");
    scanf("%d",&side_2);
    int side_3;
    printf("enter the value of side3 \n");
    scanf("%d",&side_3);

    if (side_1==side_2 && side_1==side_3 && side_2==side_3)
    {
        printf("it is a equalateral triangle \n");
    }
    else if (side_1==side_2 || side_2==side_3 || side_1==side_3)
    {
        printf("it is isosceles triangle \n");
    }
    else
    printf("it is a scalene triangle \n ");
    
    
/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Sample Test Cases:
Input 1 : 1
Output 1 : Monday

Input 2 : 5
Output 2 : Friday*/
    int day;
    printf("input day as numbers from 1-7 \n");
    scanf("%d",&day);
    switch (day) {
        case 1  : printf("monday \n");
                  break;
        case 2  : printf("tuesday \n");
                  break;
        case 3  : printf("wednesday \n");
                  break;
        case 4  : printf("thursday \n");
                  break;
        case 5  : printf("friday \n");
                  break;
        case 6  : printf("saturday \n");
                  break;
        case 7  : printf("sunday \n");
                  break;
    }

    return 0;

    
}