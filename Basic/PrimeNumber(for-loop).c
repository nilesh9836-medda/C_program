// Program: Check Prime Number in C.
// Author: Nilesh Medda
// Description: Take number from user, check the condition to be a Prime Number and print the result.

#include<stdio.h>
int main(){
	int i, num, count=0;
	printf("Enter the number you want to check: ");
	scanf("%d", &num);
	
	for(i=2;i<=num/2;i++){		// for-loop
		if(num%i==0){
			count++;
			break;}
	}
	
	if(count>0 && num!=1)
		printf("%d is a Primary Number!!\n",num);
	else
		printf("%d is not a Primary Number\n",num);
		
	return 0;
}
