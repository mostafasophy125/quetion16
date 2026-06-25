/*
     Write a C program to input a three-digit number and find the sum of its digits using arithmetic operators.

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a ;
  puts("Enter num:");
  scanf("%d",&a);
  int digit1=a%10;
  int digit2=(a/10)%10;
  int digit3=(a/100);
  int sum=digit1+digit2+digit3;
  printf("sum=%d",sum);


    return 0;
}
