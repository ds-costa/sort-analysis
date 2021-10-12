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

static void _merge_sort_merge(int low, int mid, int high, int *arr) {
    
    int i = 0;
    int j = 0;
    int k = low;

    int first_half_len = mid - low + 1;
    int second_half_len = high - mid;

    int *first_half_arr = malloc(sizeof(int) * first_half_len);
    int *second_half_arr = malloc(sizeof(int) * second_half_len);

    for(int i = 0; i < first_half_len; i++) {
        first_half_arr[i] = arr[low + i];
    }

    for(int j = 0; j < second_half_len; j++) {
        second_half_arr[j] = arr[mid + 1 + j];
    }

    while(i < first_half_len && j < second_half_len) {
        if(first_half_arr[i] <= second_half_arr[j]) {
            arr[k] = first_half_arr[i];
            i++;
        } 
        else {
            arr[k] = second_half_arr[j];
            j++;
        }
        k++;
    }

    while(i < first_half_len) {
        arr[k] = first_half_arr[i];
        i++;
        k++;
    }

    while(j < second_half_len) {
        arr[k] = second_half_arr[j];
        j++;
        k++;
    }

    free(first_half_arr);
    free(second_half_arr);
    return;
}

static void _merge_sort(int low, int high, int *arr) {
    if(low < high) {
        int mid = low + (high - low) / 2;
        _merge_sort(low, mid, arr);
        _merge_sort(mid + 1, high, arr);
        _merge_sort_merge(low, mid, high, arr);
    }
    return;
}

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void merge_sort(int arr_len, int *arr) {
    _merge_sort(0, arr_len - 1, arr);
    // mergeSort(arr, 0, arr_len - 1);
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
