#include "BinarySearch.h"
#include <assert.h>
#include <iostream>

using std::cout;
using std::endl;


BinarySearch::BinarySearch(int start, int end)
{
#ifdef TRACE
    cout << TRACE_LINE << endl;
#endif

    m_size = end - start;
    assert(m_size >= 0);

    m_start = start;
    m_end = end;

    array = new int[m_size];

    for (int i = 0; i < m_size; ++ i) {
        array[i] = start;
        start++;
    }

    assert(start == end);
}


BinarySearch::~BinarySearch()
{
#ifdef TRACE
    cout << TRACE_LINE << endl;
#endif

    if (array) {
        delete []array;
        array = nullptr;
    }
}


int BinarySearch::FindNumber(int number) const
{
#ifdef TRACE
    cout << TRACE_LINE << endl;
#endif

    if (m_size == 0) {
        if (m_start == number)  return 1;
        else  return -1; // not found
    }

    int low = 0, high = m_size - 1;
    int mid = 0;
    int guess = 0;
    int step = 0;

    while (low <= high) {
        step++;

        mid = (low + high) / 2;
        guess = array[mid];
        if (guess == number)  return step;
        if (guess > number)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1; // not found
}
