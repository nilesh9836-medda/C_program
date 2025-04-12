/* Print the biggest of three number using ternary operator in C program*/

#include<stdio.h>
int main(){
	int a, b, c, result;
	printf("Enter three numbers: \n");
	scanf("%d%d%d", &a, &b, &c);
	
	result=(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	printf("The biggest number is: %d\n",result);
	return 0;
}
