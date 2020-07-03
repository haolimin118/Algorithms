#include "SelectionSort.h"
#include <assert.h>
#include <iostream>
#include <climits>

using std::cout;
using std::endl;


SelectionSort::SelectionSort(int *array, int length)
{
#ifdef TRACE
    cout << LINE_INFO << endl;
#endif
    assert(array);
    
    m_array = array;
    m_length = length;

    /* Allocate memory and initialize to 0 */
    m_sorted = new int[m_length]();
}
    

SelectionSort::~SelectionSort()
{
    if (m_sorted) {
        delete []m_sorted;
        m_sorted = nullptr;
    }
}


int SelectionSort::Sort()
{
#ifdef TRACE
    cout << LINE_INFO << endl;
#endif

    int index = 0;
    int *tArray = new int[m_length];

    for (int i = 0; i < m_length; ++ i) {
        index = FindSmallest();
        if (index < 0)  break;
        m_sorted[index] = 1;
        tArray[i] = m_array[index];
    }

    for (int i = 0; i < m_length; ++ i) {
        m_array[i] = tArray[i];
    }

    delete []tArray;
    
    return OKAY;
}


int SelectionSort::FindSmallest()
{
    int smallest = INT_MAX, smallestIndex = -1;

    for (int i = 0; i < m_length; ++ i) {
        if (NOT m_sorted[i]) {
            if (m_array[i] < smallest) {
                smallest = m_array[i];
                smallestIndex = i;
            }
        }
    }
    return smallestIndex;
}
