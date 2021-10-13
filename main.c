#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

#include "src/array.h"
#include "src/linkedlist.h"
#include "src/timer.h"
#include "src/sort.h"

int main(int argc, char **argv) {

    if(argc < 4) {
        return -1;
    }
    // ./bin/app  insertion r 1024
    srand(time(NULL));
    
   Timer timer = {
        .start = {0, 0},
        .end = {0, 0},
        .start_ns = 0,
        .end_ns = 0,
        .elapsed_time = 0
    }; 

    int arr_len = atoi(argv[3]);
    int *arr = malloc(sizeof(int) * arr_len);

    switch((char) argv[2][0]) {
        case 'r':
            arr_random_fill_int(0, 100000, arr_len, arr);
            break;

        case 'a':
            arr_fill_in_ascending_order(arr_len, arr);
            break;

        case 'd':
            arr_fill_in_descending_order(arr_len, arr);
            break;

        default:
            arr_random_fill_int(0, 100000, arr_len, arr);
            break;
    }

    if(strcmp("insertion", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        insertion_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }
    else if(strcmp("shell", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        shell_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }
    else if(strcmp("merge", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        merge_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }
    else if(strcmp("quick", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        quick_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }
    else if(strcmp("bucket", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        bucket_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }
    else if(strcmp("counting", argv[1]) == 0) {
        clock_gettime(CLOCK_MONOTONIC, &timer.start);
        counting_sort(arr_len, arr);
        clock_gettime(CLOCK_MONOTONIC, &timer.end);
    }

    // Calcula o tempo final
    timer.start_ns = tm_timespec_to_nanosconds(timer.start);
    timer.end_ns = tm_timespec_to_nanosconds(timer.end);
    timer.elapsed_time = timer.end_ns - timer.start_ns;
    fflush(stdout);
    fprintf(stdout, "%ld\n", timer.elapsed_time);

    return 0;
}