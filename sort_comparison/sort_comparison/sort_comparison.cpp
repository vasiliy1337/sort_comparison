#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "GenerateSortingData.h"
#include "SortingAlgorithms.h"
 

using namespace std;

#define RUN(x) {Run(#x, x, data);}

template <typename T>
void Run(string MethodName, SortingAlgorithm<T> a, vector<T> data)
{
    auto start = chrono::system_clock::now();
    vector<T> res = a(data);
    auto stop = chrono::system_clock::now();
    auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

    cout << setw(30) << MethodName << setw(20) << (is_sorted(res.begin(), res.end()) ? to_string(time) + "\t mcs" : "failed") << endl;
}

int main()
{
    cout << endl << "***********************Integer***********************" << endl << endl;
    srand(time(0));
    auto intDataSets = GenerateIntData();
    for (auto& d : intDataSets)
    {
        auto& data = d.data;
        cout << d.description << ",  array size " << data.size() << endl << endl;
        RUN(HeapSort_ambroladze);
        RUN(StdSort);
        RUN(merge_sort_yurovskaya_int);
        
        cout << endl << "*****************************************************" << endl << endl;
    }

    cout << endl << "************************Double***********************" << endl << endl;
    srand(time(0));
    auto doubleDataSets = GenerateDoubleData();
    for (auto& d : doubleDataSets)
    {
        auto& data = d.data;
        cout << d.description << ",  array size " << data.size() << endl << endl;
        RUN(HeapSort_double_ambroladze);
        RUN(StdSort_double);
        RUN(merge_sort_yurovskaya_double);
        

        cout << endl << "*****************************************************" << endl << endl;
    }
}
