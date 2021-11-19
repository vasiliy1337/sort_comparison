#include <vector>

using namespace std;

template <typename T>
void max_heapify(vector<T>& data, int i, int size_)
{
    int largest, l = (2 * i) + 1, r = l + 1;

    if (l < size_ && data[l] > data[i])
        largest = l;
    else
        largest = i;

    if (r < size_ && data[r] > data[largest])
        largest = r;

    if (largest != i)
    {
        swap(data[i], data[largest]);
        max_heapify(data, largest, size_);
    }
}

template <typename T>
void build_max_heap(vector<T>& data)
{
    for (int i = (data.size() / 2); i >= 0; i--)
        max_heapify(data, i, data.size());
}

template <typename T>
void HeapSort(vector<T>& data)
{
    build_max_heap(data);
    int size = data.size();
    for (int i = data.size() - 1; i > 0; i--)
    {
        swap(data[0], data[i]);
        size--;
        max_heapify(data, 0, size);
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
