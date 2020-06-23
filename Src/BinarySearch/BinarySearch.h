#ifndef ALGORITHMS_BINARYSEARCH_BINARYSEARCH_H
#define ALGORITHMS_BINARYSEARCH_BINARYSEARCH_H

/*
 * @file:   BinarySearch.h
 * @author: Hao Limin
 * @email:  18818225063@163.com
 * @date:   2020-06-23
 * ============================================
 * Given start, end, number
 * Return steps to find out the number in [start, end)
 * Use Binary Search Algorithm.
 */

#include "BasicDefine/Define.h"


class BinarySearch
{
public:
    BinarySearch(int start, int end);
    ~BinarySearch();

    int FindNumber(int number) const;

private:
    DISALLOW_COPY_AND_ASSIGN(BinarySearch);

    int *array;
    int m_size;

    int m_start;
    int m_end;
};

#endif // ALGORITHMS_BINARYSEARCH_BINARYSEARCH_H
