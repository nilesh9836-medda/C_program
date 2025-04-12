// Program: Dynamic array input/output in C
// Author: Nilesh Medda
// Description: Takes user-defined size input, stores and displays array.

#include<stdio.h>
int main(){
	int i,size;
	
	printf("Enter size of array:\n");
	scanf("%d", &size);
	
	int a[size];
	
	printf("Enter element of Array:\n");
	for(i=0;i<size;i++){
		scanf("%d", &a[i]);
	}
	
	printf("The Array:\n");
	for(i=0;i<size;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}
