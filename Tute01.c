/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int sub1, sub2;                                //variable declaration   
  float avg;                                         

  printf("Enter Subject 01 :-");                 //prompt        
  scanf("%d", &sub1);                            //read user input and store             

  printf("Enter Subject 02 :-");                 //prompt              
  scanf("%d", &sub2);                            //read user input and store      

  avg = (sub1 + sub2) / 2.0;                     //calculating the average         
  printf("Average Marks :- %.2f", avg);          //display the average marks                         

  return 0;
}