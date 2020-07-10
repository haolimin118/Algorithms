/*
 * @file   : Fibonacci.h
 * @author : Hao Limin
 * @date   : 2020-07-10
 * =============================================
 * Use recursive algorithm to solve Fibonacci problem. O(2^n)
 * Given N (int)
 * Return the Nth of Fibonacci Progression.
 */

#include "BasicDefine/Define.h"

class Fibonacci
{
public:
    Fibonacci(int n);

    long GetFibN();

private:
    DISALLOW_COPY_AND_ASSIGN(Fibonacci);

    long RecursiveCall(int n);

    int m_targetN;
};