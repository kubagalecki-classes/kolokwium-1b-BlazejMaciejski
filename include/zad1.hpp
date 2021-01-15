#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
class Artysta
{
public:
    const std::string& getPseudonim() const { return pseudonim; }
    unsigned           getSluchacze() const { return liczbaSluchaczy; }
    Artysta(const std::string& _pseudonim, unsigned _liczbaSluchaczy)
        : pseudonim(_pseudonim), liczbaSluchaczy(_liczbaSluchaczy)
    {}
    Artysta() : pseudonim("Anonim"), liczbaSluchaczy(0) {}

    virtual void graj(std::ostream& stream) const
    {
        stream << pseudonim << ": " << std::to_string(liczbaSluchaczy);
    }

private:
    std::string pseudonim;
    unsigned    liczbaSluchaczy;
};