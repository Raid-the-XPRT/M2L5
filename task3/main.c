#include <stdio.h>

float pi=3.1415926535897932384;


int	addInt(int a,int b);
float	addFloat(float a,float b);
float	circleArea(float r);
float	rectangleArea(float a,float b);
int	factorial(int a);

int	intA	=0;
int	intB	=0;
float	fltA	=0;
float	fltB	=0;


int main(){
	printf("To calculate the addition of 2 integers, enter the value of a and b: \n");
	printf("a: ");
	scanf("%d",&intA);
	printf("b: ");
	scanf("%d",&intB);

	printf("The result is: %d\n",addInt(intA,intB));

        printf("To calculate the addition of 2 floats, enter the value of a and b: \n");
        printf("a: ");
        scanf("%f",&fltA);
        printf("b: ");
        scanf("%f",&fltB);

        printf("The result is: %f\n",addFloat(fltA,fltB));


        printf("To calculate the circle of a circle, enter the value of r: \n");
        printf("a: ");
        scanf("%f",&fltA);

        printf("The result is: %f\n",circleArea(fltA));

        printf("To calculate the Area of a rectangle, enter the value of a and b: \n");
        printf("a: ");
        scanf("%f",&fltA);
        printf("b: ");
        scanf("%f",&fltB);

        printf("The result is: %f\n",rectangleArea(fltA,fltB));

        printf("To calculate the factorial, enter the value of a: \n");
        printf("a: ");
        scanf("%d",&intA);

        printf("The result is: %d",factorial(intA));



return 0;
}



int addInt(int a,int b){
	return a+b;
}
float addFloat(float a,float b){
	return a+b;
}
float circleArea(float r){
	return r*r*pi;
}
float rectangleArea(float a,float b){
	return a*b;
}
int factorial(int a){
	if (a==0){
		return 1;
	}
	else{
		return a * factorial(a-1);
	}
}

