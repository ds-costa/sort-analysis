#include "testsort.h"

static const char* test_insertion_sort(int arr_len, int *arr) {
    insertion_sort(arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[INSERTION_SORT]: SUCESS";
    }
    return "TEST CASE 1[INSERTION_SORT]: FAIL";
}

static const char* test_shell_sort(int arr_len, int *arr) {
    shell_sort(arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[SHELL_SORT]: SUCESS";
    }
    return "TEST CASE 1[SHELL_SORT]: FAIL";
}

static const char* test_merge_sort(int arr_len, int *arr) {
    merge_sort(arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[MERGE_SORT]: SUCESS";
    }
    return "TEST CASE 1[MERGE_SORT]: FAIL";
}

static const char* test_quick_sort(int arr_len, int *arr) {
    quick_sort(0, arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[QUICK_SORT]: SUCESS";
    }
    return "TEST CASE 1[QUICK_SORT]: FAIL";
}

static const char* test_bucket_sort(int arr_len, int *arr) {
    bucket_sort(arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[BUCKET_SORT]: SUCESS";
    }
    return "TEST CASE 1[BUCKET_SORT]: FAIL";
}

static const char* test_counting_sort(int arr_len, int *arr) {
    counting_sort(arr_len, arr);
    if(arr_is_array_sorted(arr_len, arr) == true) {
        return "TEST CASE 1[COUNTING_SORT]: SUCESS";
    }
    return "TEST CASE 1[COUNTING_SORT]: FAIL";
}

void run_sort_tests() {


    int arr_len = 1000;
    int test_case_1_data[arr_len];
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1_data);

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_insertion_sort(arr_len, test_case_1));

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_shell_sort(arr_len, test_case_1));

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_merge_sort(arr_len, test_case_1));

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_quick_sort(arr_len, test_case_1));

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_bucket_sort(arr_len, test_case_1));

    arr_copy(arr_len, test_case_1_data, test_case_1);
    printf("%s\n", test_counting_sort(arr_len, test_case_1));

    return;

}