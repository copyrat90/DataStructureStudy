#ifndef ARRAY_LIST_HPP
#define ARRAY_LIST_HPP

#include "ArrayList.h"
#include <stdexcept>


template <typename T>
ArrayList<T>::ArrayList()
{
    _count = 0;
    _position = -1;
}

template <typename T>
void ArrayList<T>::Insert(T data)
{
    if (_count >= ARRAY_LIST_MAX_LEN)
        throw std::length_error("ArrayList capacity limit reached. Cannot Store Data.");

    _arr[_count++] = data;
}

template <typename T>
bool ArrayList<T>::First(T& data)
{
    if (_count == 0)
        return false;
    
    _position = 0;
    data = _arr[_position];
    return true;
}

template <typename T>
bool ArrayList<T>::Next(T& data)
{
    if (_position >= _count - 1)
        return false;
    
    data = _arr[++_position];
    return true;
}

template <typename T>
T ArrayList<T>::Remove()
{
    if (_position < 0)
        throw std::domain_error("haven't referenced any element in ArrayList.");
    
    T removed = _arr[_position];

    --_count;
    for (int i = _position; i < _count; ++i)
        arr[i] = arr[i+1];
    
    --_position;
    return removed;
}

template <typename T>
int ArrayList<T>::Count()
{
    return _count;
}

#endif