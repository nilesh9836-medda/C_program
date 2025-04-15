// Program: Areas of Triangle, Square, Circle, Rectangle, Parallelogram.
// Author: Nilesh Medda

#include <stdio.h>
#include <math.h>
int main(){
	int choice;
	printf("Enter \n1 for Triangle\n2 for Square\n3 for Circle\n4 for Rectangle\n5 for Parallelogram\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
		{
			float a,b,c;
			float s,area,s1;
			printf("Enter sides of Triangle:\n");
			scanf("%f%f%f", &a, &b, &c);
			
			s=(float)(a+b+c)/2;
			s1=s*(s-a)*(s-b)*(s-c);
			area=(float)sqrt(s1);
			
			printf("Area of Triangle with sides %f, %f, %f is %f\n",a,b,c,area);
			
			break;
		}
		case 2:
		{
			float a,area;
			printf("Enter side of the Square: ");
			scanf("%f", &a);
			
			area=(float)a*a;
			
			printf("Area of Square with side %f is %f\n",a,area);
			
			break;
		}
		case 3:
		{
			float r,area;
			printf("Enter radius of the Circle: ");
			scanf("%f", &r);
			
			area=M_PI*r*r;
			
			printf("Area of Square with side %f is %f\n", r,area);
			
			break;
		}
		case 4:
		{
			float a,b,area;
			printf("Enter sides of the Rectangle: ");
			scanf("%f%f", &a, &b);
			
			area=(float)a*b;
			
			printf("Area of Rectangle is %f\n",area);
			
			break;
		}
		case 5:
		{
			float h,b,area;
			printf("Enter base and height of Parallelogram: ");
			scanf("%f%f", &b, &h);
			
			area=(float)b*h;
			
			printf("Area of Parallelogram is %f\n",area);
			
			break;
		}
		default:
		{
			printf("Invalid choice!\n");
			
			break;
		}
	}
	
	return 0;
}
