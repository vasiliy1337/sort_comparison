#include <vector>
#include <algorithm>

using namespace std;

vector<int> StdSort(vector<int> data)
{
	sort(data.begin(), data.end());
	return data;
}

vector<double> StdSort_double(vector<double> data)
{
	sort(data.begin(), data.end());
	return data;
}