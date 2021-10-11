#include "sort.h"

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void insertion_sort(int arr_len, int *arr) {
    for(int i = 1; i < arr_len; i++) {
        int aux = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = aux;
    }
    return;
}

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void shell_sort( int arr_len, int *arr ) {
    return;
}

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void merge_sort( int arr_len, int *arr ) {
    return;
}


static int _quick_sort_partition(int low, int high, int *arr) {

    // rightmost element
    int pivot = arr[high];
    int greater_element_index = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            greater_element_index++;      
            swap_int(&arr[greater_element_index], &arr[j]);
        }
    }

    swap_int(&arr[greater_element_index + 1], &arr[high]);
    
    int partition_point = (greater_element_index + 1);

    return partition_point;
}

static void _quick_sort(int low, int high, int *arr) {
    if (low < high) {
        // find the pivot element
        int pivot = _quick_sort_partition(low, high, arr);
        // recursive call, left of pivot
        _quick_sort(low, pivot - 1, arr);
        // recursive call, of pivot
        _quick_sort(pivot + 1, high, arr);
    }
    return;
}

/**
 * function: quick_sort
 * Quick sort implementation
 * @param low, Array inferior bound. On function call: (low = 0) 
 * @param high, Array superior bound
 * @param array, Integer array reference
 */
void quick_sort(int arr_len, int *arr) {
    // inclusive range [0, len-1]
    _quick_sort(0, arr_len - 1, arr);
    return;
}

/**
 * function: bucket_sort
 * Bucket sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void bucket_sort( int arr_len, int *arr ) {
    return;
}

/**
 * function: quick_sort
 * Counting sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void counting_sort( int arr_len, int *arr ) {
    return;
}
