/*
 * Population.c
 *
 *  Created on: Feb 17, 2019
 *      Author: jianchaosun
 */


#include <stdio.h>
int main(){
	int startSize =0;
	int accp1 =0;
	float birthRate =0;
	int accp2 =0;
	float deathRate =0;
	int accp3 =0;
	int currentPop =0;
	int years =0;
	int accp4;
	while(!accp1){
	printf("Enter starting population (larger or equal than 2)\n");
	scanf("%d",&startSize);
	currentPop = startSize;
	if(startSize>=2){
		accp1 = 1;
	}
	}
	while(!accp2){
	printf("Enter birth rate (larger or equal than 0)\n");
	scanf("%f",&birthRate);
	if(birthRate>=0){
		accp2 = 1;
	}
	}

	while(!accp3){
	printf("Enter death rate (larger or equal than 0)\n");
	scanf("%f",&deathRate);
	if(deathRate>=0){
		accp3 = 1;
	}
	}

	while(!accp4){
	printf("Enter years to display(larger or equal than 1)\n");
	scanf("%d",&years);
	if(startSize>=1){
		accp4 = 1;
	}
	}
	printf("1 year population is %d\n",currentPop);
	for(int i=2;i<=years;i++){
		currentPop = currentPop + birthRate*currentPop -deathRate*currentPop;
		printf("%d ",i);
		printf("year population is %d\n", currentPop);
	}

}
