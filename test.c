#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

#include "src/testsort.h"

int main(int argc, char **argv) {
    
    srand(time(NULL));
    printf("UNIT TESTS: SORTS\n");
    run_sort_tests();
    
    return 0;
}