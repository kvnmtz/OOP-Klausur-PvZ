#pragma once

#include "plant.h"
#include "pollenextension.h"
#include "transportextension.h"

class CZombie;

class CDefensePlant final : public CPlant
{
    /* Komposition */
    CTransportExtension* TransportExtension = nullptr;
    CPollenExtension* PollenExtension = nullptr;

public:
    CDefensePlant(CGarden& garden, const EHealthState healthState, const int healthPoints, const int armorPoints, const bool poisonous) : CPlant(garden, healthState, healthPoints, armorPoints, poisonous)
    {
    }

    CDefensePlant(CGarden& garden, const EHealthState healthState, const int healthPoints, const int armorPoints, const bool poisonous, const bool canTransport, const bool canScatterPollen) : CPlant(garden, healthState, healthPoints, armorPoints, poisonous)
    {
        if (canTransport)
        {
            TransportExtension = new CTransportExtension(garden);
        }
        if (canScatterPollen)
        {
            PollenExtension = new CPollenExtension(100);
        }
    }

    ~CDefensePlant() override;

    bool Update(int damage) override;

    CZombie* Search() const;

    CTransportExtension* GetTransportExtension() const;
    CPollenExtension* GetPollenExtension() const;
};

/*

Aufgabe 2a) Von abstrakten Klassen kann keine Instanz erzeugt werden

Aufgabe 3b) Die diamantf�rmige Vererbung?

Aufgabe 3c) - Nicht alle Sub-Klassen sind mehr durch einen zusammenh�ngenden Speicherblock repr�sentiert
            -> Upcasts und Downcasts sind so nicht mehr m�glich (nur noch dynamisch, kostet Performance)
            - Vergr��erung der Objekte durch zus�tzliche VTable-Pointer
            - langsamere Typumwandlungen (Indirektionen durch VTable-Zugriffe)

*/