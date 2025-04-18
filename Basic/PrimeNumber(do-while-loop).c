// Program: Check Prime Number using Do-While Loop in C 
// Author: Nilesh Medda

#include<stdio.h>
int main(){
	int i, num, count=0;
	printf("Enter the number you want to check: ");
	scanf("%d", &num);
	
	i=2;
	do{                              //do-while loop
		if(num%i==0 && num!=2){
			count++;
			break;}
		i=i+1;
	}while(i<=num/2);
	
	if(count==0 && num!=1)
		printf("%d is a Prime Number!!\n",num);
	else
		printf("%d is not a Prime Number\n",num);
		
	return 0;
}
