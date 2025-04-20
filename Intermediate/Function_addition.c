// Program: Create a simple function to add two numbers and print the sum in C programming language.
// Author: Nilesh Medda

int add(int a, int b){
        return (a+b);
}

#include<stdio.h>
int main(){
        int n1,n2;
        printf("Enter two numbwers:\n ");
        scanf("%d%d", &n1, &n2);

        printf("The sum of %d and %d is: %d",n1,n2,add(n1,n2));

        return 0;
}
