#include "garden.h"

CGarden::~CGarden()
{
    for (const auto element : GetFields())
    {
        delete element;
    }
}

std::array<CPlayer*, 25>& CGarden::GetFields()
{
    return Fields;
}
