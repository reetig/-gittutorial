// file2.c
#include "file2.h"
#include <stdio.h>

void function2()
{
    printf("Inside function2. Calling function1...\n");
    function1(); // Call function1 from file1.c
}
