#include <vector>


void quick_sort(std::vector<int>& vec, int ind_first, int ind_last)
{
    auto middle = vec[((ind_last + ind_first) / 2)];
    auto first = ind_first;
    auto last = ind_last;
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
