#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sorts.h"
using namespace std;

void generateArray(int arr[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000; // values between 0–999
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl; // 10 numbers per row
    }
}

void copyArray(int src[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
