#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> HeapSort_ambroladze(vector<int>);

std::vector<int> quick_sort_bazanyuk(std::vector<int> data);


vector<double> HeapSort_double_ambroladze(vector<double>);

std::vector<double> quick_sort_bazanyuk_double(std::vector<double> data);