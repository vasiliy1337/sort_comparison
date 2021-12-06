#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> StdSort(vector<int>);

vector<int> HeapSort_ambroladze(vector<int>);


vector<double> StdSort_double(vector<double>);

vector<double> HeapSort_double_ambroladze(vector<double>);

vector<int> merge_sort_yurovskaya_int(vector<int> data);

vector<double> merge_sort_yurovskaya_double(vector<double> data);
