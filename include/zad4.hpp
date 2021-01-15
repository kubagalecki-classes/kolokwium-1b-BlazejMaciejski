#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol

std::vector<Artysta> stworzZespol(int a, const std::string& b)
{
    std::vector< Artysta > wektor;
    if (b.size() != a) 
    {
        throw std::logic_error;
    }

    for (int i = 0; i < a; i++) 
    {
        wektor.push_back(new Artysta(b, i + 1));
    }
    return wektor;
}