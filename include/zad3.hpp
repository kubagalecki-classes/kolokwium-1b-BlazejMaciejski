#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template < typepename T >
class ArtystaPlusInstrument
{
    ArtystaPlusInstrument(const Artysta& _artysta, const T& _instrument)
        : a(_artysta) i(_instrument)
    {}

    unsigned koncert() { return i->liczbaUczestnikow(Artysta->getSluchacze()); }

private:
    Artysta a;
    T       i;
};