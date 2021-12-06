#include <vector>

using namespace std;

template <typename T>
void heapify(vector<T>& data, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && data[l] > data[largest])
        largest = l;
    if (r < n && data[r] > data[largest])
        largest = r;
    if (largest != i) {
        swap(data[i], data[largest]);
        heapify(data, n, largest);
    }
}

template <typename T>
void HeapSort(vector<T>& data)
{
    int n = data.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(data, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(data[0], data[i]);
        heapify(data, i, 0);
    }
}


vector<int> HeapSort_ambroladze(vector<int> data) {
    HeapSort(data);
    return data;
}

vector<double> HeapSort_double_ambroladze(vector<double> data) {
    HeapSort(data);
    return data;
}
