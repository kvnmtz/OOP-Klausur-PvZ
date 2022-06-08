#pragma once

class CPollenExtension
{
    int PollenAmount;

public:
    explicit CPollenExtension(const int pollenAmount) : PollenAmount(pollenAmount)
    {
    }

    void ScatterPollen(bool isPoisonous) const;
};
