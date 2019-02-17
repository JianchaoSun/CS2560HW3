/*
 * geometrycCalculator.c
 *
 *  Created on: Feb 17, 2019
 *      Author: jianchaosun
 */

#include<stdio.h>
int main(){
	int quit = 0;
	float rad =0;
	double circleArea =0;
	int stop1 =0;
	int stop2 =0;
	float length =0;
	float width =0;
	float rectArea =0;
	int stop3 =0;
	float base =0;
	float height =0;
	float triArea =0;
	int choice = 0;
	while(!quit){
	printf("1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle \n3. Calculate the Area of a Triangle \n4. Quit\nEnter your choice (1-4)");
	scanf("%d",&choice);

	switch(choice){
	case 1:
		while(!stop1){
		printf("Enter radius (no negative input)");
		scanf("%f",&rad);
		if(rad >=0){
		circleArea = 3.14159*(rad*rad);
		stop1 = 1;
		}
		}
		printf("the area of circle is %0.3f\n",circleArea);
		stop1 =0;
		break;

	case 2:
		while(!stop2){
		printf("Enter Length (no negative input)");
		scanf("%f",&length);
		printf("Enter Width (no negative input)");
		scanf("%f",&width);
		if(length >=0 && width >=0){
        rectArea = length*width;
		stop2 = 1;
		}
		}
		stop2 =0;
		printf("the area of Rectangle is %0.3f\n",rectArea);
		break;

	case 3:
		while(!stop3){
				printf("Enter base (no negative input)");
				scanf("%f",&base);
				printf("Enter height (no negative input)");
				scanf("%f",&height);
				if(base >=0 && height >=0){
		        triArea = base*height*0.5;
				stop3 = 1;
				}
				}
				printf("the area of Triangle is %0.3f\n",triArea);
				stop3 =0;
				break;


	case 4:
		quit = 1;
		break;
	default:
		printf("Please enter number in range 1-4 \n");


	}

	}
	}
