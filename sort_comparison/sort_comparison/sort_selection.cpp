#include <vector>

using namespace std;

template <typename T>
void ChoicesSort(vector<T>& Perestanovka, int length) // ���������� �������
{
    for (int j = 0; j < length; j++)
    {
        int temp = Perestanovka[0]; // ��������� ����������, ���������� �������� ������������
        for (int z = j + 1; z < length; z++)
        {
            if (Perestanovka[j] > Perestanovka[z])
            {
                temp = Perestanovka[j];
                Perestanovka[j] = Perestanovka[z];
                Perestanovka[z] = temp;
            }
        }
    }
}

vector<int> ChoicesSort_dvoryankin(vector<int> data) {
    ChoicesSort(data, data.size());
    return data;
}

vector<double> ChoicesSort_dvoryankin_double(vector<double> data) {
    ChoicesSort(data, data.size());
    return data;
}