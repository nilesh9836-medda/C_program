//Program: Swap two numbers without using third variable in C program.
//Author: Nilesh Medda

#include<stdio.h>
int main(){
	int a, b;
	printf("Enter value of a: \n");
	scanf("%d", &a);
	printf("Enter value of b: \n");
	scanf("%d", &b);
	printf("Before swapping a=%d and b=%d\n", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d and b=%d\n", a, b);
	
	return 0;
}
