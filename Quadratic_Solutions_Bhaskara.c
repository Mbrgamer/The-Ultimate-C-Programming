/*Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000 */
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c;
printf("Enter a : ");
scanf("%f",&a);
printf("Enter b : ");
scanf("%f",&b);
printf("Enter c : ");
scanf("%f",&c);
float discriminant=b*b-4*a*c;
if(discriminant>=0){
float square_discriminant=sqrt(discriminant);
float root1=(-b+square_discriminant)/(2*a);
float root2=(-b-square_discriminant)/(2*a);
printf("Root 1 = %f\n",root1);
printf("Root 2 = %f\n",root2);
}
else{
printf("ROOT ARE NOT POSSIBLE(IMAGINARY ROOTS)");
}
return 0;
}
