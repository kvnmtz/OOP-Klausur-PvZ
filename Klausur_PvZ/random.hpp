#pragma once

#include <cstdlib>
#include <ctime>

/*-----------------------------------------------------------------------------
    Utility-Namespace für Zufallszahlen
-----------------------------------------------------------------------------*/

namespace Random
{
    /**
     * \brief Seedet den RNG
     */
    inline void Initialize()
    {
        srand(time(nullptr));
    }

    /**
     * \param min Untere Grenze des Ergebnisses
     * \param max Obere Grenze des Ergebnisses
     * \return Eine zufällige Zahl die in den angegebenen Grenzen liegt (inklusive)
     */
    inline int GetRandomNumber(const int min, const int max)
    {
        return rand() % (max + 1) + min;
    }
}