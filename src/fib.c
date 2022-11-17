#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci numbers defined recursively */
int fib(int n)
{
    /* pre-condition */
    assert(n >= 1);
    /* post-condition */
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

/* Fibonacci function definition */
int myfib(int n, int p, int pp)
{
    assert(n >= 1);
    
    if (n == 1) {
        return p; 
    }
    else if (n == 2) {
        return pp;
    }
    else {
        return myfib(n - 1, pp, p + pp);
    }
    return 0;
}
