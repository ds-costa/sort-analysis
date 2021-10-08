/****************************************
*	TITLE: Test Sort
*	AUTHOR: David S. Costa
*   DESCRIPTION: Unit test functions for sort algos		
*****************************************/
#ifndef TEST_SORT_H
#define TEST_SORT_H

#include "../src/sort.h"
#include "../src/array.h"

void test_insertion_sort(int arr_len, int *arr);
void test_shell_sort(int arr_len, int *arr);
void test_merge_sort(int arr_len, int *arr);
void test_quick_sort(int arr_len, int *arr);
void test_bucket_sort(int arr_len, int *arr);
void test_counting_sort(int arr_len, int *arr);

#endif