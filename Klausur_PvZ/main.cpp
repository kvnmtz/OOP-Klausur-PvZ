#include <iostream>

#include "defenseplant.h"
#include "garden.h"
#include "random.hpp"
#include "zombie.h"

int main()
{
    Random::Initialize();

    const auto garden = new CGarden();

    const int plantIndex = Random::GetRandomNumber(0, 24);
    const auto plant = new CDefensePlant(*garden, EHealthState::Thriving, 250, 75, false, true, true);
    garden->GetFields()[plantIndex] = plant;

    for (int i = 0; i < 2; ++i)
    {
        int zombieIndex = Random::GetRandomNumber(0, 24);
        while (garden->GetFields()[zombieIndex] != nullptr)
        {
            zombieIndex = Random::GetRandomNumber(0, 24);
        }
        garden->GetFields()[zombieIndex] = new CZombie(*garden);
    }

    /* Ruft Destructor von CGarden auf und deleted Elemente im Fields-Array */
    delete garden;
}