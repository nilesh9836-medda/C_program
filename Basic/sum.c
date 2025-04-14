//Program: Add two numbers in C program.
//Author: Nilesh Medda
//Description: Take two numbers from user, add them and print the result.

#include<stdio.h>
int main(){
	int a, b, result;
	printf("Enter first number: \n");
	scanf("%d", &a);
	printf("Enter second number: \n");
	scanf("%d", &b);
	result=a+b;
	printf("Result= %d", result);
	
	return 0;
}
