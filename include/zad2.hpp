#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const std::string& _pseudonim, unsigned _liczbaSluchaczy)
    {
        this->pseudonim       = _pseudonim;
        this->liczbaSluchaczy = _liczbaSluchaczy;
    }

    void graj(std::ostream& stream) const { stream << "PopGwiazda: " << getPseudonim(); }
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda(const std::string& _pseudonim, unsigned _liczbaSluchaczy)
    {
        this->pseudonim       = _pseudonim;
        this->liczbaSluchaczy = _liczbaSluchaczy;
    }

    void graj(std::ostream& stream) const { stream << "RapGwiazda: " << getPseudonim(); }
};

Artysta* stworzArtyste(const std::string& str)
{
    if (str.front() == std::toupper(str.front()))
    {
        return new PopGwiazda("BTS", 1234);
    }
    else
    {
        return new RapGwiazda("Ye", 4321);
    }
}