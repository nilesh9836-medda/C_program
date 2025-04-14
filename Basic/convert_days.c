// Program: Convert the given days to years, months, weeks and days in C
// Author: Nilesh Medda
// Description: Takes total no. of days from user as input, calculate and display no. of year, month, week, and day.

#include<stdio.h>
int main(){
	int total_days, years, months, weeks, days;
	printf("Enter the total number of Days: ");
	scanf("%d", &total_days);
	years= total_days/365;            // Calculate years
	months= (total_days%365)/30;      // Calculate months
	weeks= ((total_days%365)%30)/7;    // Calculate weeks
	days= ((total_days%365)%30)%7;    // Calculate days
	printf("Now, %d Days = %dYears, %dMonths, %dWeeks, %dDays\n",total_days,years,months,weeks,days);
	
	return 0;
}
