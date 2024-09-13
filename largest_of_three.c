/*Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35*/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    int largest=0;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    printf("Enter 3rd Number : ");
    scanf("%d",&num3);

    if (num1>num2&&num1>num3)
    {
        largest=num1;
    printf("Largest of Three = %d\n",largest);
    }
    else if (num2>num1&&num2>num3)
    {
    largest=num2;
    printf("Largest of Three = %d\n",largest);
    }
    else if (num3>num1&&num3>num2)
    {
        largest=num3;
    printf("Largest of Three = %d\n",largest);
    }

    else if(num1==num2&&num2==num3&&num1==num3){
        printf("All Numbers Are Equal \n");
    }
    
    else{
        printf("Invalid Value Entered\n");
    }
    

    return 0;
}