#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include <algorithm>
#include "GenerateSortingData.h"
#include "SortingAlgorithms.h"
 

using namespace std;

#define RUN(x) {                \
    Run(#x, x, data);           \
}

template <typename T>
void Run(string MethodName, SortingAlgorithm<T> a, vector<T> data)
{
    auto start = chrono::system_clock::now();
    vector<T> res = a(data);
    auto stop = chrono::system_clock::now();
    auto time = chrono::duration_cast<chrono::microseconds>(stop - start).count();

    cout << MethodName << "\t"
        << data.size() << "\t"
        << (is_sorted(res.begin(), res.end()) ? to_string(time) + "\t mcs" : "failed") << endl;
}

int main()
{
    cout << endl << "**********Integer**********" << endl << endl;
    srand(time(0));
    auto intDataSets = GenerateIntData();
    for (auto& d : intDataSets)
    {
        cout << d.description << endl << endl;
        auto& data = d.data;
        
        RUN(StdSort);
        
        cout << endl << "**************************" << endl << endl;
    }
}
