#pragma once
#include <vector>

using namespace std;

template <typename T>
using SortingAlgorithm = vector<T>(*)(vector<T>);

vector<int> HeapSort_ambroladze(vector<int>);
vector<double> HeapSort_double_ambroladze(vector<double>);

vector<int> ChoicesSort_dvoryankin(vector<int> data);
vector<double> ChoicesSort_dvoryankin_double(vector<double> data);

vector<int> SmoothSort_Mukhtarov(vector<int> data);
vector<double> SmoothSort_Mukhtarov_double(vector<double> data);

std::vector<int> quick_sort_bazanyuk(std::vector<int> data);
std::vector<double> quick_sort_bazanyuk_double(std::vector<double> data);