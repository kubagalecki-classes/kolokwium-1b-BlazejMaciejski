#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template < typename T >
class ArtystaPlusInstrument
{
    ArtystaPlusInstrument(const Artysta& _artysta, const T& _instrument)
        : a(_artysta), i(_instrument)
    {}

    unsigned koncert() { return i->liczbaUczestnikow(Artysta); }

private:
    Artysta a;
    T       i;
};