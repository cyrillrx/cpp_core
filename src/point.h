//
// Created by Cyril Leroux on 29/04/15.
//

#pragma once

template<typename T>
struct Point
{
    T x;
    T y;

    Point() : x(), y() { }

    Point(T x, T y) : x(x), y(y) { }
};
