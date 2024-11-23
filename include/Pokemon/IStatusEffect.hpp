#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include <string>

using namespace std;
class IStatusEffect
{
	public:
	virtual void ApplyEffect(N_Pokemon::Pokemon* target) = 0;

	virtual string GetEffectName() = 0;

	virtual bool TurnEndEffect(N_Pokemon::Pokemon* target) = 0;

	virtual void ClearEffect(N_Pokemon::Pokemon* target) = 0;

	virtual ~IStatusEffect() = default;
};