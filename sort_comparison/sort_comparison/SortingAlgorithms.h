#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> HeapSort_ambroladze(vector<int>);

vector<int> ChoicesSort_dvoryankin(vector<int> data);

vector<double> HeapSort_double_ambroladze(vector<double>);

vector<double> ChoicesSort_dvoryankin_double(vector<double> data);