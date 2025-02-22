//2. Recursive Function for Factorial: Write a recursive function to find the factorial of a given number.//
#include <stdio.h>

int factorial(int n) 
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));
    return 0;
}
