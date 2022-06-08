#pragma once

#include "player.h"

class CZombie final : public CPlayer
{
public:
    explicit CZombie(CGarden& garden) : CPlayer(garden)
    {
    }
};