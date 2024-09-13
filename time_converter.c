/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/
#include<stdio.h>
int main(){
    int time;
    printf("Enter Time : ");
    scanf("%d",&time);
    int hour=time/3600;
    int remaining_time=time%3600;
    int minutes=remaining_time/60;
    remaining_time=remaining_time%60;
    int second=remaining_time/1;
    printf("%dH-",hour);
    printf("%dM-" ,minutes); 
    printf("%dS",second);
    return 0;
}