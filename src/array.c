#include "array.h"

/**
 * function: arr_scan_int
 * Writes to the array the (int) content read in the stdin
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void arr_scan_int(int arr_len, int *arr) {
    for(int i = 0; i < arr_len; i++) {
        scanf("%d", &arr[i]);
    }
    return;
}
/**
 * function: arr_print_int
 * Shows the contents of the (int) array in stdout
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void arr_print_int(int arr_len, int *arr) {
    printf("{ ");
    for(int i = 0; i < arr_len - 1; i++) {
		printf("%d, ", arr[i]);
	}    
	printf("%d }\n", arr[arr_len - 1]);
    return;
}

/**
 * function: arr_random_fill_int
 * Fill an integer array with random numbers in an interval [low, high]
 * @param low, inferior limit 
 * @param high, superior limit
 * @param arr_len, Array length
 * @param arr, Integer array reference
 */
void arr_random_fill_int(int low, int high, int arr_len, int *arr) {
    for(int i = 0; i < arr_len; i++) {
        arr[i] = ( low + rand() % ( high - low + 1 ));
    }
    return;
}

void arr_fill_in_ascending_order(int arr_len, int *arr) {
    for(int i = 0; i < arr_len; i++) {
        arr[i] = i;
    }
    return;
}

void arr_fill_in_descending_order(int arr_len, int *arr) {
    for(int i = 0; i < arr_len; i++) {
        arr[i] = arr_len - i - 1;
    }
    return;
}


/**
 * function: arr_is_array_sorted
 * 
 */
bool arr_is_array_sorted(int arr_len, int *arr) {
    if(arr_len == 1) {
        return true;
    }
    for(int i = 0; i < arr_len - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}