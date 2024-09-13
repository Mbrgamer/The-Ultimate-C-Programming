/*Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include<stdio.h>
int main(){
    float p,a,r;//P-->Perimter,A-->Area,R-->Radius
    float pi=3.1415;//Pi-->π
    printf("Enter Radius : ");
    scanf("%f",&r);
    p=2*pi*r;//Formula -->P=2πr
    a=pi*(r*r);//Formula -->A=πr^2
    printf("Perimeter Of A Circle = %f\n",p);
    printf("Area Of Circle = %f\n",a);

    return 0;
}