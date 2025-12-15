#include <stdio.h>
#include "utils.h"

void performCalculations(int n)
{
    for (int i = 0; i < n; i++)
    {
        int result = square(i); // Use the inline function
        // You can do something with result if needed
    }
}
