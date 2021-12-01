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
        {"already sorted", {6, 10, 14, 16, 20, 27, 35, 36, 39, 41, 50, 51, 56, 57, 58, 60, 80, 86, 88, 94, 96}},
        {"almost sorted", {6, 10, 14, 16, 20, 27, 35, 36, 39, 41, 50, 51, 56, 57, 58, 88, 94, 60, 80, 86, 96}},
        { "random integer", GenerateInt(10, -500, 1000) },
        { "random integer", GenerateInt(100, -500, 1000) },
        { "random integer", GenerateInt(1000, -500, 1000) },
        { "random integer", GenerateInt(10000, -500, 1000) },
        { "random integer", GenerateInt(100000, -500, 1000) },
        { "random integer", GenerateInt(1000000, -500, 1000) },
    };
}
vector<Data<double>> GenerateDoubleData()
{
    return {
        { "sorted double", {1.0, 2.0, 3.0, 4.0} },
        { "unsorted double", {4.0, 3.0, 2.0, 1.0} },
        { "just doubles", GenerateDouble(10, -500, 1000) },
        { "just doubles", GenerateDouble(100, -500, 1000) },
        { "just doubles", GenerateDouble(1000, -500, 1000) },
        { "just doubles", GenerateDouble(10000, -500, 1000) },
        { "just doubles", GenerateDouble(100000, -500, 1000) },
        { "just doubles", GenerateDouble(1000000, -500, 1000) },
    };
}