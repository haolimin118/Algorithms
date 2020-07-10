#include "Fibonacci.h"
#include <assert.h>


Fibonacci::Fibonacci(int n)
{
    assert(n >= 0);

    m_targetN = n;
}


long Fibonacci::GetFibN()
{
    long n = RecursiveCall(m_targetN);
    return n;
}


long Fibonacci::RecursiveCall(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return RecursiveCall(n - 1) + RecursiveCall(n - 2);
}