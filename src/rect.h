//
// Created by Cyril Leroux on 29/04/15.
//

#pragma once

template<class T>
struct rect
{
    T left;
    T top;
    T right;
    T bottom;

    rect() : left(), top(), right(), bottom() { }

    rect(T left, T top, T right, T bottom) : left(left), top(top), right(right), bottom(bottom) { }
};