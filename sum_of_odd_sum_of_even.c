/* Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46*/
#include<stdio.h>
int main(){
    int number_length=0;
    printf("How Many Number You want to add\n");
    scanf("%d",&number_length);
    int oddsum,evensum;
    int number;
    oddsum=0;
    evensum=0;
    for (int i = 1; i <=number_length;i++)
    {
    printf("Enter a Number : ");
    scanf("%d",&number);
    if (number%2!=0)
    {
        oddsum+=number;
    }
    else{
        evensum+=number;
    }
    }
    printf("Sum Of Odd Number is %d\nSum of Even Number is %d\n",oddsum,evensum);
    return 0;
}