#pragma once

#include <array>

#include "player.h"

class CGarden
{
    std::array<CPlayer*, 25> Fields{};

public:
    ~CGarden();

    std::array<CPlayer*, 25>& GetFields();
};