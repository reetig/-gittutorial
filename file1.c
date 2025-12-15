// file1.c
#include "file1.h"
#include "file2.h" // Include file2.h to access function2()
#include <stdio.h>

void function1()
{
    printf("Inside function1. Calling function2...\n");
    function2(); // Call function2 from file2.c
}
