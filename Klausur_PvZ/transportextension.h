#pragma once

class CGarden;

class CTransportExtension
{
    CGarden& Garden;

    int GetAvailablePlants() const;

public:
    explicit CTransportExtension(CGarden& garden) : Garden(garden)
    {
    }

    void Transport() const;
};
