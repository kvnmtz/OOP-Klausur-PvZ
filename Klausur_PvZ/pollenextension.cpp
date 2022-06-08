#include "pollenextension.h"

#include <iostream>

void CPollenExtension::ScatterPollen(const bool isPoisonous) const
{
    std::cout << "Vorhandener Bluetenstaub: " << (isPoisonous ? PollenAmount * 2 : PollenAmount) << std::endl;
}
