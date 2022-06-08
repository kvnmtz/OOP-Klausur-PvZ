#pragma once

#include "player.h"

enum class EHealthState
{
    DriedOut,
    Thriving,
    Blooming
};

class CPlant : public CPlayer
{
protected:
    EHealthState HealthState;
    int HealthPoints;
    int ArmorPoints;
    bool Poisonous;

public:
    CPlant(CGarden& garden, const EHealthState healthState, const int healthPoints, const int armorPoints, const bool poisonous) : CPlayer(garden), HealthState(healthState), HealthPoints(healthPoints), ArmorPoints(armorPoints), Poisonous(poisonous)
    {
    }

    EHealthState GetHealthState() const;
    void SetHealthState(EHealthState state);

    int GetHealthPoints() const;
    void SetHealthPoints(int health);

    int GetArmorPoints() const;
    void SetArmorPoints(int armor);

    bool IsPoisonous() const;
    void SetPoisonous(bool poisonous);

    /* Pure virtual function -> kein Methodenkörper (diese Funktion MUSS von Basisklassen überschrieben werden und macht CPlant abstrakt) */
    virtual bool Update(int damage) = 0;
};

/*

Aufgabe 1b) public, protected, private
Aufgabe 1c) public: überall sichtbar
            protected: in der Klasse selbst und in abgeleiteten Klassen sichtbar
            private: nur in der Klasse selbst sichtbar

*/