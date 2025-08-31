#include <stdio.h>

int main(){
/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.
Sample Test Cases:

Input 1 : 2
Output 1 : February, 28 days

Input 2 : 12
Output 2 : December, 31 days*/
    int month;
    printf("enter the month no \n");
    scanf("%d",&month);
    switch (month){
        case 1 : printf("january , 31 days \n");
                break;
        case 2 : printf("februry , 28 days \n");
                break;
        case 3 : printf("march , 31 days \n");
                break;
        case 4 : printf("april , 30 days \n");
                break;
        case 5 : printf("may , 31 days \n");
                break;
        case 6 : printf("june , 30 days \n");
                break;
        case 7 : printf("july , 31 days \n");
                break;
        case 8 : printf("august , 31 days \n");
                break;
        case 9 : printf("september , 30 days \n");
                break;
        case 10 : printf("october , 31 days \n");
                break;
        case 11 : printf("november , 30 days \n");
                break;
        case 12 : printf("december , 31 days \n");
                break;
    }

    
/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:

Input 1 : 1000 1200
Output 1 : Profit 20%

Input 2 : 1000 800
Output 2 : Loss 20%

Input 3 : 1000 1000
Output 3 : No Profit No Loss*/
    int cost_price;
    printf("enter the cost price \n");
    scanf("%d",&cost_price);
    int selling_price;
    printf("enter the selling price \n");
    scanf("%d",&selling_price);
    if (selling_price>cost_price)
    {
        int profit = selling_price - cost_price ;
        printf(" Profit  ,  the profit percentage : %d \n",(profit*100)/cost_price);
    }
    else if (cost_price>selling_price)
    {
         int loss = cost_price - selling_price ;
        printf(" loss  ,  the loss percentage : %d \n",(loss*100)/cost_price);
    }
    else if (cost_price==selling_price)
    {
        printf("no profit no loss");
    }
    else
    printf("incorrect input");
    

    return 0;
}