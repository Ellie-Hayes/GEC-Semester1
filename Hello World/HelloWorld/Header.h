#pragma once
#include "S2D/S2D.h"
using namespace S2D;

class Matrix
{
    int* arrayTime;
    int m_width;
public:

    Matrix(int w, int h) : m_width(w), arrayTime(new int[w * h]) {}

    ~Matrix()
    {
        delete[] arrayTime;
    }

    int at(int x, int y) const
    {
        return arrayTime[index(x, y)];
    }
protected:

    int index(int x, int y) const { return x + m_width * y; }
};