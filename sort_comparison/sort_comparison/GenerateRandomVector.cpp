#include "GenerateRandomVector.h"

vector<int> GenerateInt(int size, int min, int max) {
    vector<int> res(size, 0);
    generate(res.begin(), res.end(), [&]() {
        return (min + rand() % (max - min));
        });
    return res;
}

vector<double> GenerateDouble(int size, double min, double max) {
    vector<double> res(size, 0);
    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<double> distr(min, max);
    generate(res.begin(), res.end(), [&]() {
        return round(distr(eng) * 100) / 100;
        });
    return res;
}