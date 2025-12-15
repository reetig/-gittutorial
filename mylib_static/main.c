#include <stdio.h>
#include "mylib_static/mylib_static.h" // Include your static library header

int main()
{
    int a = 5;
    int b = 10;
    int result = multiply(a, b); // Call the function from static library
    printf("Static Library: %d * %d = %d\n", a, b, result);
    return 0;
}
