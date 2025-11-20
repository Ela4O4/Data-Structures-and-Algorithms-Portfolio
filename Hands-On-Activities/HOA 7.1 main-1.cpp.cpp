#include <iostream>
#include "sorts.h"
using namespace std;

int main() {
    const int SIZE = 100;
    int arr[SIZE];

    // generate unsorted random array
    generateArray(arr, SIZE);

    cout << "Original array:\n";
    printArray(arr, SIZE);

    // bubble sort
    int bubbleArr[SIZE];
    copyArray(arr, bubbleArr, SIZE);
    bubbleSort(bubbleArr, SIZE);
    cout << "\nSorted with Bubble Sort:\n";
    printArray(bubbleArr, SIZE);

    // selection sort
    int selectionArr[SIZE];
    copyArray(arr, selectionArr, SIZE);
    selectionSort(selectionArr, SIZE);
    cout << "\nSorted with Selection Sort:\n";
    printArray(selectionArr, SIZE);

    // insertion sort
    int insertionArr[SIZE];
    copyArray(arr, insertionArr, SIZE);
    insertionSort(insertionArr, SIZE);
    cout << "\nSorted with Insertion Sort:\n";
    printArray(insertionArr, SIZE);

    return 0;
}
