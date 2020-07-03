#ifndef ALGORITHMS_SELECTIONSORT_SELECTIONSORT_H
#define ALGORITHMS_SELECTIONSORT_SELECTIONSORT_H

/*
 * @file:   SelectionSort.h
 * @author: Hao Limin
 * @email:  18818225063@163.com
 * @date:   2020-07-02
 * ================================
 * Selection Sort : O(n^2)
 * Given an unordered array (int) and length.
 * Sort the array.
 * Return OKAY if success, otherwise ERROR.
 */

#include "BasicDefine/Define.h"


class SelectionSort
{
public:
    SelectionSort(int *array, int length);
    ~SelectionSort(); 

    int Sort();

private:
    DISALLOW_COPY_AND_ASSIGN(SelectionSort);

    /* Return the smallest element's index */
    int FindSmallest(); 

    int *m_array;
    int  m_length;

    /* Used to record sorted elements */
    int *m_sorted;
};

#endif // ALGORITHMS_SELECTIONSORT_SELECTIONSORT_H
