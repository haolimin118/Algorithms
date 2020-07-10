#include <iostream>
#include "BinarySearch/BinarySearch.h"
#include "SelectionSort/SelectionSort.h"
#include "Recursive/Fibonacci.h"

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


static void TestSelectionSort()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int length1 = 5;
    cout << "\nunsorted array:" << endl;
    for (int i = 0; i < length1; ++ i) {
        cout << arr1[i] << ' ';
    }
    SelectionSort *ss1 = new SelectionSort(arr1, length1);
    ss1->Sort();
    cout << "\nsorted array:" << endl;
    for (int i = 0; i < length1; ++ i) {
        cout << arr1[i] << ' ';
    }
    cout << endl;
    delete ss1;

    int arr2[5] = {5, 4, 3, 2, 1};
    int length2 = 5;
    cout << "\nunsorted array:" << endl;
    for (int i = 0; i < length2; ++ i) {
        cout << arr2[i] << ' ';
    }
    SelectionSort *ss2 = new SelectionSort(arr2, length2);
    ss2->Sort();
    cout << "\nsorted array:" << endl;
    for (int i = 0; i < length2; ++ i) {
        cout << arr2[i] << ' ';
    }
    cout << endl;
    delete ss2;

    int arr3[10] = {5, 4, 3, 2, 1, 0, -1, -2, -3, -4};
    int length3 = 10;
    cout << "\nunsorted array:" << endl;
    for (int i = 0; i < length3; ++ i) {
        cout << arr3[i] << ' ';
    }
    SelectionSort *ss3 = new SelectionSort(arr3, length3);
    ss3->Sort();
    cout << "\nsorted array:" << endl;
    for (int i = 0; i < length3; ++ i) {
        cout << arr3[i] << ' ';
    }
    cout << endl;
    delete ss3;
}


void TestFibonacci()
{
    Fibonacci f1(0);
    long result = f1.GetFibN();
    printf("Fib (%d) = %ld\n", 0, result);

    Fibonacci f2(1);
    result = f2.GetFibN();
    printf("Fib (%d) = %ld\n", 1, result);

    Fibonacci f3(2);
    result = f3.GetFibN();
    printf("Fib (%d) = %ld\n", 2, result);

    Fibonacci f4(10);
    result = f4.GetFibN();
    printf("Fib (%d) = %ld\n", 10, result);

    Fibonacci f5(50);
    result = f5.GetFibN();
    printf("Fib (%d) = %ld\n", 50, result);
}


int main()
{
    printf("[Algorithms Project] -- Hao Limin\n");

    // printf("\n[BinarySearch]\n");
    // TestBinarySearch();

    // printf("\n[SelectionSort]\n");
    // TestSelectionSort();

    printf("\n[Recursive Fibonacci]\n");
    TestFibonacci();

    return 0;
}
