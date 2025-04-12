/* Swap two numbers using third variable */

#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter value of a: \n");
	scanf("%d", &a);
	printf("Enter value of b: \n");
	scanf("%d", &b);
	printf("Before swapping a=%d and b=%d\n", a, b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d and b=%d\n", a, b);
	
	return 0;
}
