/*5 Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803*/
#include<stdio.h>
#include<math.h>
 
int main(){
    float x1,x2,y1,y2;
    printf("Enter X1,X2,Y1,Y2 : ");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    float difference_x=x2-x1;
    float difference_y=y2-y1;
    float x_square=difference_x*difference_x;
    float y_square=difference_y*difference_y;
    float add=x_square+y_square;
    float distance_btw_points=sqrt(add);
    printf("The Distance Between Pount %f\n",distance_btw_points);
    return 0;
}