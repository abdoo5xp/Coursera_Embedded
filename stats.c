/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief First week assignment 
 *
 * main() - The main entry point for your program
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() - Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() - Given an array of data and a length, returns the mean
 * find_maximum() - Given an array of data and a length, returns the maximum
 * find_minimum() - Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.  
 *
 * @author Abdullah ayman
 * @date 30/5/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 
 print_statistics(test, SIZE);                 

}

/* Add other Implementation File Code Here */

void sort(unsigned char *arry,char len){
	char flag;
	do {
		flag = 0;
		for (char i = 0 ; i < len-1 ; i++)
		{
			if ( arry[i] < arry[i+1]){

				swap(&arry[i] , &arry[i+1]);
				flag = 1;
			}

		}

	} while ( flag != 0 );

}

void swap(unsigned char *a, unsigned char *b){
	unsigned char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void print_array(unsigned char *arry,char len){
	
	for(char i = 0;i < len; i++)
	{
		printf("\nElement number : %d = %d", i+1, arry[i]);
	}
	printf("\n");
}

unsigned char find_minimum(unsigned char *arry,char len){

	unsigned char min;
	min = arry[0];
	char i = 0;

	while(i < len){
		if(arry[i] < min)
			min = arry[i];
		i++;
	} 
	return min;
}

unsigned char find_maximum(unsigned char *arry,char len){
	
	unsigned char max;
	max = arry[0];
	char i = 0;
	
	while(i < len){
		if(arry[i] > max)
			max = arry[i];
		i++;
	} 
	return max;
}

unsigned char find_mean(unsigned char *arry,char len){
	
	unsigned char sum = 0;

	for(char i = 0; i < len; i++)
		sum += arry[i];
	
	return (sum/len);
}

unsigned char find_median(unsigned char *arry,char len){

	unsigned char med;
	char med_index ;
	sort(arry,len);

	if (len % 2 == 0){  		// number of elements is even.
		med_index = len / 2;
		med = (arry[med_index] + arry[med_index + 1]) / 2;
	}
	else { 						// number of elements is odd. 
		med_index = len - 1 / 2;
		med = arry[med_index];
	}

	return med;
}

void print_statistics(unsigned char *arry,char len){
	unsigned char min = find_minimum(arry, len);
	unsigned char max = find_maximum(arry, len);
	unsigned char median = find_median(arry, len);
	unsigned char mean = find_mean(arry, len);

	printf("Min:%d \n",min);
	printf("Max:%d \n",max);
	printf("Mean:%d \n",mean);
	printf("Median:%d \n",median); 

}