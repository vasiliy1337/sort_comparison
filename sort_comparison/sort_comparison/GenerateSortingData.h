#pragma once
#include "GenerateRandomVector.h"

using namespace std;

template <typename T>
struct Data
{
    string description;
    vector<T> data;
};
vector<Data<int>> GenerateIntData()
{
    return {
        { "random integer", GenerateInt(10, -500, 1000) },
        { "random integer", GenerateInt(100, -500, 1000) },
        { "random integer", GenerateInt(1000, -500, 1000) },
    };
}
vector<Data<double>> GenerateDoubleData()
{
    return {
    { "sorted double", {1.0, 2.0, 3.0, 4.0} },
    { "sorted double", {4.0, 3.0, 2.0, 1.0} },
    { "just doubles", GenerateDouble(10, -500, 1000) },
    { "just doubles", GenerateDouble(100, -500, 1000) },
    { "just doubles", GenerateDouble(1000, -500, 1000) },
    };
}