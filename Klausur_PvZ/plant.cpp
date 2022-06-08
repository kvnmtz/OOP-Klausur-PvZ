#include "plant.h"

EHealthState CPlant::GetHealthState() const
{
    return HealthState;
}

void CPlant::SetHealthState(const EHealthState state)
{
    HealthState = state;
}

int CPlant::GetHealthPoints() const
{
    return HealthPoints;
}

void CPlant::SetHealthPoints(const int health)
{
    HealthPoints = health;
}

int CPlant::GetArmorPoints() const
{
    return ArmorPoints;
}

void CPlant::SetArmorPoints(const int armor)
{
    ArmorPoints = armor;
}

bool CPlant::IsPoisonous() const
{
    return Poisonous;
}

void CPlant::SetPoisonous(const bool poisonous)
{
    Poisonous = poisonous;
}
