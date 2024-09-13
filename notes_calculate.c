/*Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00*/
#include<stdio.h>
int main(){
  int notes=0;
  int remaining_notes=0;
  int one_hundred_notes,fifty_notes,twenty_notes,ten_notes,five_notes,two_notes,one_notes;
  printf("Enter Notes : ");
  scanf("%d",&notes);
  one_hundred_notes=notes/100;
  printf("%d Notes of 100.00\n",one_hundred_notes);
  remaining_notes=notes%100;
  fifty_notes=remaining_notes/50;
  printf("%d Notes of 50.00\n",fifty_notes);
  remaining_notes=remaining_notes%50;
  twenty_notes=remaining_notes/20;
  printf("%d Notes of 20.00\n",twenty_notes);
  remaining_notes=remaining_notes%20;
  five_notes=remaining_notes/5;
  printf("%d Notes of 5.00\n",five_notes);
  remaining_notes=remaining_notes%5;
  one_notes=remaining_notes/1;;
  printf("%d Notes of 1.00\n",one_notes);
  return 0;
}