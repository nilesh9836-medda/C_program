// Program: Check the given year is leap year or not in C
// Author: Nilesh Medda
// Description: Takes input from user, checks and display the result.

#include<stdio.h>
int main(){
	int year;
	printf("Enter the year:");
	scanf("%d", &year);
	if(year%100==0){
		if(year%400==0){
			printf("Year %d is Leap-Year",year);
		}
		else{
			printf("Year %d is not Leap-Year",year);
		}
	}
	else{
		if(year%4==0){
			printf("Year %d is Leap-Year",year);
		}
		else{
			printf("Year %d is not Leap-Year",year);
		}
	}
	
	return 0;
}
