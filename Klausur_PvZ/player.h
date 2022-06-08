#pragma once

class CGarden;

class CPlayer
{
    CGarden& Garden;

public:
    explicit CPlayer(CGarden& garden) : Garden(garden)
    {
    }

    /* Virtual destructor, macht die Klasse polymorph und erlaubt damit die Nutzung von dynamic_cast */
    virtual ~CPlayer() = default;

    CGarden& GetGarden() const;
};
