// Program: Check the given number is Perfect or not in C
// Author: Nilesh Medda

#include<stdio.h>
int main(){
	int num,n,d,sum=0;
	printf("Enter your number: ");
	scanf("%d", &num);
	
	n=num;
	while(n>0){		// while-loop
		d=n%10;
		sum=(sum*10)+d;
		n=n/10;
	}
	
	if(sum==num)
		printf("%d is a Perfect Number!!\n",sum);
	else
		printf("%d is not a Perfect Number\n",sum);
	
	return 0;
}
