#include "transportextension.h"

#include <iostream>

#include "garden.h"
#include "plant.h"

int CTransportExtension::GetAvailablePlants() const
{
    int plants = 0;
    for (const auto element : Garden.GetFields())
    {
        /* Erklärung zu dynamic_cast in defenseplant.cpp */
        const auto plant = dynamic_cast<CPlant*>(element);
        if (plant)
        {
            plants++;
        }
    }
    return plants;
}

void CTransportExtension::Transport() const
{
    std::cout << "Moegliche Pflanzen: " << GetAvailablePlants() << std::endl;
}
