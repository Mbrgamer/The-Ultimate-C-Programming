/*Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444*/
#include<stdio.h>
int main(){
    float weight_1,weight_2; 
    float no_item_1,no_item_2;
    printf("Enter Weight of Item no 1 : ");
    scanf("%f",&weight_1);
    printf("Enter Number Of Item 1 :");
    scanf("%f",&no_item_1);
    printf("Enter Weight of Item No 2: ");
    scanf("%f",&weight_2);
    printf("Enter No Item No 2 :");
    scanf("%f",&no_item_2);
    printf("Average Value %f\n",((weight_1*no_item_1)+(weight_2*no_item_2))/(no_item_1+no_item_2));
    return 0;
}