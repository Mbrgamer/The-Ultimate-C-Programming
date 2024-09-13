/*Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number of Days : ");
    scanf("%d",&num);
    int year=num/365;
    printf("Year = %d\n",year);
   
    int r_day=num%365;
     int week=r_day/7;
    printf("Week = %d\n",week);
    int day;
 day=r_day%7;
   
    printf("Day = %d\n",day);
return 0;
}