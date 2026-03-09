#include <iostream>
using namespace std;

float Rata-rata(float a, float b)
{
    return (a+b)/2;
}

string status_lulus(float r)
{
    if (r >=60)
        return "Lolos";
    else
        return "Gagal";
}