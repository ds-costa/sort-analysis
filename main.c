#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

#include "src/array.h"

int main(int argc, char **argv) {

    printf("Hello world!\n");

    int arr[5];
    int arr2[5];

    arr_scan_int(5, arr);
    arr_print_int(5, arr);
    arr_copy(5, arr, arr2);
    arr_print_int(5, arr2);

    // arr_fill_in_ascending_order(5, arr);
    // arr_print_int(5, arr);
    // printf("sorted: %d\n", arr_is_array_sorted(5, arr));

    // arr_fill_in_descending_order(5, arr);
    // arr_print_int(5, arr);
    // printf("sorted: %d\n", arr_is_array_sorted(5, arr));



    return 0;
}