#include "defenseplant.h"

#include "garden.h"
#include "zombie.h"

CDefensePlant::~CDefensePlant()
{
    delete TransportExtension;
    delete PollenExtension;
}

bool CDefensePlant::Update(const int damage)
{
    HealthPoints -= std::max(0, damage - ArmorPoints);

    if (HealthState == EHealthState::Blooming)
    {
        HealthPoints += 5;
    }
    else if (HealthState == EHealthState::DriedOut)
    {
        HealthPoints -= 5;
    }

    return HealthPoints <= 0;
}

CZombie* CDefensePlant::Search() const
{
    for (const auto element : GetGarden().GetFields())
    {
        /* dynamic_cast versucht die (polymorphe) Basis-Klasse in eine Sub-Klasse zu casten, bei Erfolg wird der korrekte Pointer (CZombie*) zurückgegeben, bei einem Fehler ein nullptr */
        const auto zombie = dynamic_cast<CZombie*>(element);
        /* Prüfen, ob zombie != nullptr ist (-> dynamic_cast hat geklappt) */
        if (zombie)
        {
            return zombie;
        }
    }
    return nullptr;
}

CTransportExtension* CDefensePlant::GetTransportExtension() const
{
    return TransportExtension;
}

CPollenExtension* CDefensePlant::GetPollenExtension() const
{
    return PollenExtension;
}
