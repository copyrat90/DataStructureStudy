#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

constexpr int ARRAY_LIST_MAX_LEN = 100;

template <typename T>
class ArrayList
{
private:
    T _arr[ARRAY_LIST_MAX_LEN];
    int _count;
    int _position;

public:
    ArrayList();

    void Insert(T);
    bool First(T&);
    bool Next(T&);
    T Remove();
    int Count();
};


#include "ArrayList.hpp"

typedef ArrayList List;

#endif