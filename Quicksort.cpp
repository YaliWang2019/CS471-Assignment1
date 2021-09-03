// Quicksort.cpp
// Yali Wang
// 2021-09-01
//
// For CS F471 Fall 2021
// Source file for assignment 1. Implementing a quicksort algorithm with partition.

#include "Quicksort.h"

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(std::vector<int>& arr, int low, int high) {
    if (arr.empty()) return;
    if (low < high) {
         int position = partition(arr, low, high);
         quicksort(arr, low, position - 1);
         quicksort(arr, position + 1, high);
    }
}
