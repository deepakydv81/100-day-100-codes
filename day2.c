
#include <stdio.h>

int main() {

/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1: 5 10
Output 1: Area=50, Perimeter=30

Input 2: 3 7
Output 2:Area=21, Perimeter=20
*/

    int length;
    printf("enter the value of length = \n");
    scanf("%d",&length);
    int bredth; 
    printf("enter the value of bredth = \n");
    scanf("%d",&bredth);
    printf("area of rectangle %d \n",length*bredth);
    printf("perimeter of rectangle %d \n",2*(length+bredth));


/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1: 7
Output 1: Area=153.94, Circumference=43.96
Input 2: 3
Output 2: Area=28.27, Circumference=18.85
*/

    int radius;
    float pi = 3.14;
    printf("enter the value of radius = \n");
    scanf("%d",&radius);
    printf("area of circle %f \n",pi*radius*radius);
    printf("perimeter of circumference %f \n",2*pi*radius);

    return 0;
}


