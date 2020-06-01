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
 * @file stats.h
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
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief function to print array elements in a nice way 
 *
 * @param unsigned char *arry : a pointer to the array you want to print.
 * @param char len : number of elements of your array.
 *
 * @return None
 */

void print_array(unsigned char *arry,char len);


/**
 * @brief function to swap two elements  
 *
 * @param unsigned char *a : a pointer to the first element you want to swap.
 * @param unsigned char *b : a pointer to the second element you want to swap.
 *
 * @return None
 */

void swap(unsigned char *a, unsigned char *b);

/**
 * @brief function to Bubble sort array elements. 
 *
 * @param unsigned char *arry : a pointer to the array you want to sort.
 * @param char len : number of elements of your array.
 *
 * @return None
 */

void sort(unsigned char *arry,char len);

/**
 * @brief function to get minimum value of array elements. 
 *
 * @param unsigned char *arry : a pointer to the array you want to process.
 * @param char len : number of elements of your array.
 *
 * @return unsigned char min
 */

unsigned char find_minimum(unsigned char *arry,char len);

/**
 * @brief function to get maximum value of array elements. 
 *
 * @param unsigned char *arry : a pointer to the array you want to process.
 * @param char len : number of elements of your array.
 *
 * @return unsigned char max
 */

unsigned char find_maximum(unsigned char *arry,char len);

/**
 * @brief function to get the mean value of array elements. 
 *
 * @param unsigned char *arry : a pointer to the array you want to process.
 * @param char len : number of elements of your array.
 *
 * @return unsigned char mean
 */

unsigned char find_mean(unsigned char *arry,char len);

/**
 * @brief function to get the median value of array elements. 
 *
 * @param unsigned char *arry : a pointer to the array you want to process.
 * @param char len : number of elements of your array.
 *
 * @return unsigned char median
 */

unsigned char find_median(unsigned char *arry,char len);

/**
 * @brief function to print min,max,mean,median elements of a given array in a nice way. 
 *
 * @param unsigned char *arry : a pointer to the array you want to process.
 * @param char len : number of elements of your array.
 *
 * @return None
 */

void print_statistics(unsigned char *arry,char len);

#endif /* __STATS_H__ */
