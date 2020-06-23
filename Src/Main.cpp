#include <iostream>
#include "BinarySearch/BinarySearch.h"

using namespace std;

static void TestBinarySearch()
{
    int start = 1, end = 10;
    int target = 5;
    BinarySearch *bs = new BinarySearch(start, end);
    int step = bs->FindNumber(target);

    if (step > 0) {
        printf("Binary Search %d in [%d, %d), %d step(s)\n", target, start, end, step);
    } else {
        printf("Binary Search %d in [%d, %d), not found\n", target, start, end);
    }
    delete bs;

    start = -1;
    end = 6;
    target = 0;

    bs = new BinarySearch(start, end);
    step = bs->FindNumber(target);

    if (step > 0) {
        printf("Binary Search %d in [%d, %d), %d step(s)\n", target, start, end, step);
    } else {
        printf("Binary Search %d in [%d, %d), not found\n", target, start, end);
    }
    delete bs;

    start = 1;
    end = 10;
    target = 12;

    bs = new BinarySearch(start, end);
    step = bs->FindNumber(target);

    if (step > 0) {
        printf("Binary Search %d in [%d, %d), %d step(s)\n", target, start, end, step);
    } else {
        printf("Binary Search %d in [%d, %d), not found\n", target, start, end);
    }
    delete bs;

    start = 1;
    end = 1;
    target = 1;

    bs = new BinarySearch(start, end);
    step = bs->FindNumber(target);

    if (step > 0) {
        printf("Binary Search %d in [%d, %d), %d step(s)\n", target, start, end, step);
    } else {
        printf("Binary Search %d in [%d, %d), not found\n", target, start, end);
    }
    delete bs;

#if 0
    start = 1;
    end = 0;
    target = 1;

    bs = new BinarySearch(start, end);
    step = bs->FindNumber(target);

    if (step > 0) {
        printf("Binary Search %d in [%d, %d), %d step(s)\n", target, start, end, step);
    } else {
        printf("Binary Search %d in [%d, %d), not found\n", target, start, end);
    }
    delete bs;
#endif
}


int main()
{
    printf("[Algorithms Project] -- Hao Limin\n");
    printf("\n[BinarySearch]\n");
    TestBinarySearch();

    return 0;
}
