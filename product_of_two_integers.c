/*Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375*/
#include<stdio.h>
int main(){
    int first_integer;
    int second_integer;
    printf("Enter First Integer : ");
    scanf("%d",&first_integer);
    printf("Enter Second Integer : ");
    scanf("%d",&second_integer);
    printf("Product Of Above Integer = %d\n",first_integer*second_integer);
    return 0;
}