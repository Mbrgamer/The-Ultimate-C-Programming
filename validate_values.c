/*Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values */
#include<stdio.h>
int main(){
int p,q,r,s;
printf("Enter Even Value (p) : ");
scanf("%d",&p); 
printf("Enter Positive Values (q,r,s) : ");
scanf("%d%d%d",&q,&r,&s);
int sum1,sum2;
sum1=r+s;
sum2=p+q;
if(q>r&&s>p){
if(sum1>sum2){
printf("Correct Values\n");
}
else{
printf("Wrong Values\n");
}
}
else{
printf("Invalid\n");
}
return 0;
}
