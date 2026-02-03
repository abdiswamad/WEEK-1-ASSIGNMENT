//program to input Height, bankbalance and phonenumber
/*
Description: program to input Height, bankbalance and phonenumber
Name: ABDISAMAD ALI MOHAMUD
REG NO:BCS-03-0OO1/2026
*/

#include <stdio.h>//pre-processor directive scanf(), printf()
//main function

int main() {
    float height;
    double bankBalance;
    float phoneNumber;

    
    printf("Enter your height (in centimeters):\n ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya shillings):\n ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number:\n ");
    scanf("%f", &phoneNumber);
return 0;
}
