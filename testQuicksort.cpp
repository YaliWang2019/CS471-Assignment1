// testQuicksort.cpp
// Yali Wang
// 2021-09-01
//
// For CS F471 Fall 2021
// Tests for the quicksort algorithm with partition


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <cstdio>
#include <algorithm>
#include "Quicksort.h"


TEST_CASE("Empty, Single, Two, and More Elements Arrays"){
	SUBCASE("Empty Array") {
		std::vector<int> arr1{};
		quicksort(arr1, 0, 0);

		REQUIRE(arr1.empty());
	}
	SUBCASE("Single Element Array") {
		std::vector<int> arr2{5};
		quicksort(arr2, 0, 0);
		
		REQUIRE(arr2.size() == 1);
		REQUIRE(arr2[0] == 5);
	}

	SUBCASE("Two Elements Array") {
		std::vector<int> arr3{ 6, 7 };
		quicksort(arr3, 0, 1);

		REQUIRE(arr3.size() == 2);
//		REQUIRE(arr3[] == {6, 7});
	}
	
	SUBCASE("More Elements Array (originally unsorted)") {
		std::vector<int> arr4{ 19, 97, 11, 29, 20, 15, 12, 31 };
		auto checkArr4 = arr4;
		std::sort(checkArr4.begin(), checkArr4.end());
		quicksort(arr4, 0, (arr4.size() - 1));

		REQUIRE(arr4.size() == 8);
		REQUIRE(equal(checkArr4.begin(), checkArr4.end(), arr4.begin()));
	}
	
	SUBCASE("Arrays including Negatives (originnally unsorted)") {
		std::vector<int> arr5{ 45, 33, 56, 18, -8, -11, 10 };
		auto checkArr5 = arr5;
		std::sort(checkArr5.begin(), checkArr5.end());
		quicksort(arr5, 0, (arr5.size() - 1));

		REQUIRE(arr5.size() == 7);
		REQUIRE(equal(checkArr5.begin(), checkArr5.end(), arr5.begin()));
	}
}