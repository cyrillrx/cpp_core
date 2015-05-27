//
// Created by Cyril Leroux on 01/05/2015.
//

#pragma once

#include <iostream>
#include "rect.h"
#include "point.h"

template<typename T>
void Display(Rect<T> rect)
{
    std::cout << "Rect(" << rect.left << ", " << rect.top << ", " << rect.right << ", " << rect.bottom << ")" << std::endl;
    std::cout << "Dimens (" << rect.width() << "*" << rect.height() << ")" << std::endl;
}

/**
 * @param name The name of the rect.
 */
template<typename T>
void Display(Rect<T> rect, std::string name)
{
    std::cout << "Displaying rect " << name << std::endl;
    Display(rect);
}

template<typename T>
void Display(Point<T> point)
{
    std::cout << "Point(" << point.x << ", " << point.y << ")" << std::endl;
}

/**
 * @param name The name of the point.
 */
template<typename T>
void Display(Point<T> point, std::string name)
{
    std::cout << "Displaying point " << name << std::endl;
    Display(point);
}

