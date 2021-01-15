#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)

template < typename T >
int liczPopularnych(T a, T b)
{
    return std::count_if(a, b, [](T obj) { return obj.getSluchacze > 1000; });
};