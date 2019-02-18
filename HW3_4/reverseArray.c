/*
 * reverseArray.c
 *
 *  Created on: Feb 17, 2019
 *      Author: jianchaosun
 */

#include<stdio.h>
int *reverseArray(int x[], int size){
    static int* arr;
	arr = (int*) calloc(size,sizeof(int));
	arr[5];
	int beg =0;
	int end =size-1;
	while(beg<=end){
		arr[end] =x[beg];
		arr[beg] =x[end];
		beg++;
		end--;
	}
	return arr;
}
int main(){
	int x[]={3,6,2,1,34};
	printf("Before reverse: \n");
	for(int i=0;i<5;i++){
		printf(", %d ",x[i] );
	}
	printf("\nAfter reverse: \n");
	int *p = reverseArray(x,5);
	for(int i=0;i<5;i++){
		printf(", %d ",*p);
		p++;
	}
}
