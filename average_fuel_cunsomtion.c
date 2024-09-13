/*Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000*/
#include<stdio.h>
int main(){
    int total_distance_in_km;
    float total_fuel_in_liters;
    float average_cunsomtion;
    printf("Enter Total Distance In Kilometers : ");
    scanf("%d",&total_distance_in_km);
    printf("Enter Fuel Spent In Liters : ");
    scanf("%f",&total_fuel_in_liters);
    average_cunsomtion=total_distance_in_km/total_fuel_in_liters;
    printf("Average Cunsomtion = %.2f\n",average_cunsomtion);
    return 0;
}