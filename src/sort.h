/****************************************
*	TITLE: Sort functions
*	AUTHOR: David S. Costa		
*****************************************/

#ifndef SORT_H
#define SORT_H

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
#include <math.h>
#include "array.h"

#define swap_int(a, b) {\
        int aux = *a;\
        *a = *b;\
        *b = aux;\
    }



/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void insertion_sort( int arr_len, int *arr );

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void shell_sort( int arr_len, int *arr );

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void merge_sort( int arr_len, int *arr );

/**
 * function: quick_sort
 * Quick sort implementation
 * @param low, Array inferior bound. On function call: (low = 0) 
 * @param high, Array superior bound
 * @param array, Integer array reference
 */
void quick_sort(int arr_len, int *arr);

/**
 * function: bucket_sort
 * Bucket sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void bucket_sort( int arr_len, int *arr );

/**
 * function: quick_sort
 * Counting sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void counting_sort( int arr_len, int *arr );


#endif