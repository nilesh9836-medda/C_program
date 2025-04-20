// Program: Average of numbers using Array in C Programming language.
// Author: Nilesh Medda

#include<stdio.h>
int main(){
        int n,i,sum;
        float avg;
        printf("Enter the size of Array: ");
        scanf("%d", &n);

        int ar[n];
        printf("Enter the values of Array: \n");
        for(i=0;i<n;i++){
                scanf("%d", &ar[i]);
        }

        sum=0;
        for(i=0;i<n;i++){
                sum+=ar[i];
        }
        avg=(float)sum/n;

        printf("The Average is = %.2f\n", avg);

        return 0;
}
