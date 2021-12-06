#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> HeapSort_ambroladze(vector<int>);


vector<double> HeapSort_double_ambroladze(vector<double>);
vector<int> SmoothSort_Mukhtarov(vector<int> data);
vector<double> SmoothSort_Mukhtarov_double(vector<double> data);