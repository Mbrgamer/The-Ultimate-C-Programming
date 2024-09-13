/*9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63*/
#include<stdio.h>
int main(){
    int first_integer;
    int secong_integer;
    printf("Enter First Integer : ");
    scanf("%d",&first_integer);
    printf("Enter Second Integer : ");
    scanf("%d",&secong_integer);
    printf("The sum of Above Two Integers = %d\n ",first_integer+secong_integer);
    return 0;
}