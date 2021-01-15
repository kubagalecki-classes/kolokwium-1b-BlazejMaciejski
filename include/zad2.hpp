#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : Artysta
{
    PopGwiazda(const std::string& _pseudonim, unsigned _liczbaSluchaczy)
        : pseudonim(_pseudonim), liczbaSluchaczy(_liczbaSluchaczy)
    {}
};

class RapGwiazda : Artysta
{
    RapGwiazda(const std::string& _pseudonim, unsigned _liczbaSluchaczy)
        : pseudonim(_pseudonim), liczbaSluchaczy(_liczbaSluchaczy)
    {}
};