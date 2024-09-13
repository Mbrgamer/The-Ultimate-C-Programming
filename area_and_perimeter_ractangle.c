/*Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/
#include<stdio.h>
int main(){
    int p,a,h,w;//P-->Perimter,A-->Area,H-->Height,W-->Width
    printf("Enter Height : ");
    scanf("%d",&h);
    printf("Enter Width : ");
    scanf("%d",&w);
    p=2*(h+w);//Formula 2×(H+W)
    a=h*w;//Formula H×W
    printf("Perimeter Of Ractangle  = %d\n",p);
    printf("Area Of Ractangle  = %d\n",a);
    return 0;
}