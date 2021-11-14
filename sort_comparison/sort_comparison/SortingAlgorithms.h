#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> StdSort(vector<int>);