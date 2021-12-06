#include <vector>

template<typename T>
void quick_sort(std::vector<T>& vec, int ind_first, int ind_last)
{
    T middle = vec[(ind_last + ind_first) / 2];
    int first = ind_first;
    int last = ind_last;
    do
    {
        while (vec[first] < middle)
            ++first;
        while (vec[last] > middle)
            --last;
        if (first <= last)
        {
            std::swap(vec[first], vec[last]);
            ++first;
            --last;
        }
    } while (first <= last);
    if (last > ind_first)
        quick_sort(vec, ind_first, last);
    if (first < ind_last)
        quick_sort(vec, first, ind_last);
}


std::vector<int> quick_sort_bazanyuk(std::vector<int> data) {
    quick_sort(data, 0, data.size() - 1);
    return data;
}

std::vector<double> quick_sort_bazanyuk_double(std::vector<double> data) {
    quick_sort(data, 0, data.size() - 1);
    return data;
}