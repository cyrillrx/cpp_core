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

    T width() { return right - left; }

    /**
     * Updates the rect right position using the given width.
     */
    T width(T newWidth) { right = left + newWidth; }

    T height() { return bottom - top; }

    /**
     * Updates the rect bottom position using the given height.
     */
    T height(T newHeight) { bottom = top + newHeight; }
};