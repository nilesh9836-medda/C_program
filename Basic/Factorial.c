// Program: Calculate Factorial of the given number in C 
// Author: Nilesh Medda

#include<stdio.h>
int main(){
	int num,i;
	long int fact=1;
	printf("Enter your name: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){	// for-loop
		fact=fact*i;
	}
	
	/*
	i=1;
	while(i<=num){		    // while-loop
		fact=fact*i;
		i++;
	}
	*/
	/*
	i=1;
	do{			              // do-while loop
		fact=fact*i;
		i++;
	}while(i<=num);
	*/
	
	printf("Factorial of %d = %ld\n",num,fact);
	
	return 0;
}
