//
// Created by Cyril Leroux on 29/04/15.
//

#pragma once

template<class T>
struct point
{
    T x;
    T y;

    point() : x(), y(), right(), bottom() { }

    point(T x, T y) : x(x), y(y) { }
};
