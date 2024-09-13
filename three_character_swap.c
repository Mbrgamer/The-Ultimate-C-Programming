/*Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX*/
#include<stdio.h>
int main(){
    char a,b,c;
    char temp;
    printf("Enter Any Three Character : ");
    scanf("%c %c %c",&a,&b,&c);
    printf("Your Input Value %c%c%c\n",a,b,c);
    temp=a;// Value in A will Be Store in Temp and A will be Empty
    a=c;//Value in C will Be Store in A and C will Be Empty
    c=temp;//Value in temp Which was original  from A will Store in C and ABC-->CBA
    printf("Reversed Of Your Value %c%c%c\n",a,b,c);
    return 0;
}