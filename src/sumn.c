#include "sumn.h"
#include <assert.h>
#include <stdio.h>

// recursive function created using inductive proof 
int sumn(int n)
{
    if (n == 1) {
        return 1;
    }
    else
        return (2 * n - 1) + sumn(n - 1);
}