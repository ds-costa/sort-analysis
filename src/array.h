#ifndef ARRAY_H
#define ARRAY_H

#include <stdbool.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(array[0]))

/**
 * function: arr_scan_int
 * Writes to the array the (int) content read in the stdin
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void arr_scan_int( int arr_len, int *arr);

/**
 * function: arr_print_int
 * Shows the contents of the (int) array in stdout
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void arr_print_int( int arr_len, int *arr);

/**
 * function: arr_random_fill_int
 * Fill an integer array with random numbers in an interval [low, high]
 * @param low, inferior limit 
 * @param high, superior limit
 * @param arr_len, Array length
 * @param arr, Integer array reference
 */
void arr_random_fill_int(int low, int high, int arr_len, int *arr);

void arr_fill_in_ascending_order(int arr_len, int *arr);

void arr_fill_in_descending_order(int arr_len, int *arr);


/**
 * function: arr_is_array_sorted
 * 
 */
bool arr_is_array_sorted(int arr_len, int *arr);

#endif