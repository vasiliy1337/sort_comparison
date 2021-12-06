#include <vector>

using namespace std;

template <typename T>
void merge_sort(vector <T>& data, vector<T>& b, size_t start, size_t end)
{
	if ((end - start) < 2)
		return;
	if ((end - start) == 2)
	{
		if (data[start] > data[start + 1])
			swap(data[start], data[start + 1]);
		return;
	}
	merge_sort(data, b, start, start + (end - start) / 2);
	merge_sort(data, b, start + (end - start) / 2, end);


	size_t start_b1 = start;
	size_t end_e1 = start + (end - start) / 2;
	size_t start_b2 = end_e1;
	size_t end_b2 = end;
	while (b.size() < end - start)
	{
		if (start_b1>= end_e1 || (start_b2 < end && data[start_b2] <= data[start_b1]))
		{
			b.push_back(data[start_b2]);
			start_b2++;
		}
		else
		{
			b.push_back(data[start_b1]);
			start_b1++;
		}
	}
	for (size_t i = start; i < end; i++)
		data[i] = b[i - start];
}

vector<int> merge_sort_yurovskaya_int(vector<int> data)
{
	vector <int> b(data.size());
	merge_sort(data, b, 0, data.size());
	return data;
}

vector<double> merge_sort_yurovskaya_double(vector<double> data)
{
	vector <double> b(data.size());
	merge_sort(data, b, 0, data.size());
	return data;
}
