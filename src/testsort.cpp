#include "testsort.h"

static const char* test_insertion_sort() {
    

    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    insertion_sort(arr_len, test_case_1);

    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[INSERTION_SORT]: FAIL";
    }
    insertion_sort(arr_len, test_case_2);
    
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[INSERTION_SORT]: FAIL";
    }
    insertion_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[INSERTION_SORT]: FAIL";
    }
    return "TEST [INSERTION_SORT]: SUCESS";
}

static const char* test_shell_sort() {
    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    shell_sort(arr_len, test_case_1);

    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[SHELL_SORT]: FAIL";
    }
    shell_sort(arr_len, test_case_2);
    
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[SHELL_SORT]: FAIL";
    }
    shell_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[SHELL_SORT]: FAIL";
    }
    return "TEST [SHELL_SORT]: SUCESS";
}

static const char* test_merge_sort() {
    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    merge_sort(arr_len, test_case_1);

    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[MERGE_SORT]: FAIL";
    }
    merge_sort(arr_len, test_case_2);
    
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[MERGE_SORT]: FAIL";
    }
    merge_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[MERGE_SORT]: FAIL";
    }
    return "TEST [MERGE_SORT]: SUCESS";
}

static const char* test_quick_sort() {
    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    quick_sort(arr_len, test_case_1);

    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[QUICK_SORT]: FAIL";
    }
    quick_sort(arr_len, test_case_2);
    
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[QUICK_SORT]: FAIL";
    }
    quick_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[QUICK_SORT]: FAIL";
    }
    return "TEST [QUICK_SORT]: SUCESS";
}

static const char* test_bucket_sort() {
    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    bucket_sort(arr_len, test_case_1);

    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[BUCKET_SORT]: FAIL";
    }
    bucket_sort(arr_len, test_case_2);
    
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[BUCKET_SORT]: FAIL";
    }
    bucket_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[BUCKET_SORT]: FAIL";
    }
    return "TEST [BUCKET_SORT]: SUCESS";
}

static const char* test_counting_sort() {
    int arr_len = 1024;;
    int test_case_1[arr_len];
    int test_case_2[arr_len];
    int test_case_3[arr_len];

    arr_random_fill_int(0, 10000, arr_len, test_case_1);
    arr_fill_in_ascending_order(arr_len, test_case_2);
    arr_fill_in_descending_order(arr_len, test_case_3);

    counting_sort(arr_len, test_case_1);
    if(arr_is_array_sorted(arr_len, test_case_1) == false) {
        return "TEST CASE 1[COUNTING_SORT]: FAIL";
    }

    counting_sort(arr_len, test_case_2);
    if(arr_is_array_sorted(arr_len, test_case_2) == false) {
        return "TEST CASE 2[COUNTING_SORT]: FAIL";
    }

    counting_sort(arr_len, test_case_3);
    if(arr_is_array_sorted(arr_len, test_case_3) == false) {
        return "TEST CASE 3[COUNTING_SORT]: FAIL";
    }
    return "TEST [COUNTING_SORT]: SUCESS";
}

void run_sort_tests() {
    printf("%s\n", test_insertion_sort());
    printf("%s\n", test_shell_sort());
    printf("%s\n", test_merge_sort());
    printf("%s\n", test_quick_sort());
    printf("%s\n", test_counting_sort());
    printf("%s\n", test_bucket_sort());
    return;
}