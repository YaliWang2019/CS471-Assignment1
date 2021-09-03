// Quicksort.cpp
// Yali Wang
// 2021-09-01
//
// For CS F471 Fall 2021
// Header file for assignment 1.

#ifndef QUICKSORT
#define QUICKSORT
#include <iostream>
#include <algorithm>
#include <vector>

int partition(std::vector<int>& arr, int low, int high);
void quicksort(std::vector<int>& arr, int low, int high);

#endif