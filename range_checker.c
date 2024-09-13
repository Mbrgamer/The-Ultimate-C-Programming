#include<stdio.h>
int main(){
int number;
printf("Enter Number : ");
scanf("%d",&number);
if(number>80||number<0){
printf("Invalid\n");
}
else{
if(number>=0&&number<=20){
printf("Range [0,20]\n");
}
else if(number>=21&&number<=30){
printf("Range [21,30]\n");
}
else if(number>=31&&number<=40){
printf("Range [31,40]\n"); 
}
else if(number>=41&&number<=50){
printf("Range [41,50]\n"); 
}
else if(number>=51&&number<=60){
printf("Range [51,60]\n"); 
}
else if(number>=61&&number<=70){
printf("Range [61,70]\n"); 
}
else if(number>=71&&number<=80){
printf("Range [71,80]\n"); 
}
else{
printf("Invalid\n");
}
}

return 0;
}
