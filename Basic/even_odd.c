// Program: Check given number is even or odd in C
// Author: Nilesh Medda
// Description: Takes input from user, checks and display even or odd.

#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	if(n%2==0){
		printf("%d is even number",n);
	}
	else {
		printf("%d is odd number\n",n);
	}
	
	return 0;
}
