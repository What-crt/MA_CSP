// MA 6th financial calculator for c
#include <stdio.h>
int main(void){

    float income, rent, utilities, grocieries, transport, total, savings, spending;

    printf("What is your monthly income:");
    scanf("%f", &income);
    printf("\nWhat is your monthly rent:");
    scanf("%f", &rent);
    printf("What is your monthly utilities:");
    scanf("%f", &utilities);
    printf("What is your monthly grocieries:");
    scanf("%f", &grocieries);
    printf("What is your monthly transport:");
    scanf("%f", &transport);
    total = rent + utilities + grocieries + transport;
    savings = income * 0.10;
    spending = income - total - savings;
    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, (rent/income)*100);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, (utilities/income)*100);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", grocieries, (grocieries/income)*100);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transport, (transport/income)*100);
    printf("\nYou should save $%.2f a month, that is 10%% of your income.\n", savings);
    printf("You have $%.2f of spending money each month!\n", spending);
    return 0;

}