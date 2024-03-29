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
        /*{"already sorted", {6, 10, 14, 16, 20, 27, 35, 36, 39, 41, 50, 51, 56, 57, 58, 60, 80, 86, 88, 94, 96}},*/
        //{ "random integer", GenerateInt(21, -500, 1000) },
        //{"almost sorted", {6, 10, 14, 16, 20, 27, 35, 36, 39, 41, 50, 51, 56, 57, 58, 88, 94, 60, 80, 86, 96}},
        { "random integer", GenerateInt(10, -500, 1000) },
        { "random integer", GenerateInt(50, -500, 1000) },
        { "random integer", GenerateInt(100, -500, 1000) },
        { "random integer", GenerateInt(500, -500, 1000) },
        { "random integer", GenerateInt(1000, -500, 1000) },
        { "random integer", GenerateInt(2000, -500, 1000) },
        { "random integer", GenerateInt(3000, -500, 1000) },
        { "random integer", GenerateInt(4000, -500, 1000) },
        { "random integer", GenerateInt(5000, -500, 1000) },
        { "random integer", GenerateInt(6000, -500, 1000) },
        { "random integer", GenerateInt(7000, -500, 1000) },
        { "random integer", GenerateInt(8000, -500, 1000) },
        { "random integer", GenerateInt(9000, -500, 1000) },
        { "random integer", GenerateInt(10000, -500, 1000) },
        { "random integer", GenerateInt(20000, -500, 1000) },
        { "random integer", GenerateInt(30000, -500, 1000) },
        { "random integer", GenerateInt(40000, -500, 1000) },
        { "random integer", GenerateInt(50000, -500, 1000) },
        { "random integer", GenerateInt(100000, -500, 1000) },
    };
}
vector<Data<double>> GenerateDoubleData()
{
    return {
        { "sorted double", {1.0, 2.0, 3.0, 4.0} },
        { "unsorted double", {4.0, 3.0, 2.0, 1.0} },
        { "just doubles", GenerateDouble(10, -500, 1000) },
        { "just doubles", GenerateDouble(50, -500, 1000) },
        { "just doubles", GenerateDouble(100, -500, 1000) },
        { "just doubles", GenerateDouble(500, -500, 1000) },
        { "just doubles", GenerateDouble(1000, -500, 1000) },
    };
}