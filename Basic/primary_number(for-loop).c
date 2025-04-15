// Program: Check Primary Number in C.
// Author: Nilesh Medda
//Description: Take number from user, check the condition to be a primary number and print the result.

#include<stdio.h>
int main(){
	int i, num, count=0;
	printf("Enter the number you want to check: ");
	scanf("%d", &num);
	
	for(i=2;i<num;i++){
		if(num%i==0)
			count++;
	}
	
	if(count>0)
		printf("%d is not a Primary Number\n",num);
	else
		printf("%d is a Primary Number!\n",num);
		
	return 0;
}
