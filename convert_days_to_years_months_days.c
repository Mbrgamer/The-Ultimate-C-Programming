/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)*/
#include<stdio.h>
int main(){
    int totaldays;
    int remainingdays;
    int year,month,days;
    printf("Enter No Of Days : ");
    scanf("%d",&totaldays);
    year=totaldays/365;
    printf("%d Years\n",year);
    remainingdays=totaldays%365;
    month=remainingdays/30;
    printf("%d Months \n",month);
    remainingdays=remainingdays%30;
    days=remainingdays/1;
    printf("%d Days \n",days);
}