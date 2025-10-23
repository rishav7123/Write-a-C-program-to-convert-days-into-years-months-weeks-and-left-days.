// Write a ‘C’ program to convert days into years , months, weeks and left days.
#include<stdio.h>
int main(){
    float days, years, months,weeks, wd;
    printf("Enter days: ");
    scanf("%f", &days);
    printf("Days in months is : %f\n", days/30);
    printf("Days in years is : %f\n", days/365);
    printf("Days in weeks is: %f\n", days/7);

    return 0;

}